from fastapi import FastAPI, HTTPException, Body
import random
from datetime import datetime, timedelta
import json
from fastapi.middleware.cors import CORSMiddleware
import os

app = FastAPI()

# origins and middlware are for CORS which prevent localhost frontend --fetch--> localhost backend
# both frontend and backend need create "origin" to allow this
origins = [
    "http://localhost:3000",
]

app.add_middleware(
    CORSMiddleware,
    allow_origins=origins,
    allow_credentials=True,
    allow_methods=["*"],
    allow_headers=["*"],
)

@app.post("/create_schedule/")
def create_schedule(data: dict = Body(...)):
    start_date = datetime.strptime(data['start_date'], '%Y%m%d')
    end_date = datetime.strptime(data['end_date'], '%Y%m%d')
    subject_ratio = {entry['subject']: int(entry['ratio']) for entry in data['subject_ratio']}

    days = (end_date - start_date).days + 1
    periods_per_day = 3  # morning, afternoon, evening
    total_periods = days * periods_per_day

    total_ratio = sum(subject_ratio.values())
    units_per_ratio = total_periods // total_ratio
    remaining_units = total_periods % total_ratio

    subjects = []
    for subject, ratio in subject_ratio.items():
        subjects.extend([subject] * (ratio * units_per_ratio))

    # Fill remaining periods with "rest"
    subjects.extend(["rest"] * remaining_units)

    # Shuffle subjects to randomize distribution
    random.shuffle(subjects)

    schedule = {}
    index = 0
    periods = ["morning", "afternoon", "evening"]
    for day in range(days):
        current_date = (start_date + timedelta(days=day)).strftime('%Y%m%d')
        schedule[current_date] = {}
        for period in periods:
            schedule[current_date][period] = subjects[index]
            index += 1

    os.makedirs('data', exist_ok=True)
    with open('data/schedule.json', 'w') as f:
        json.dump(schedule, f, indent=2)

    return schedule

@app.get("/get_schedule/")
def get_schedule():
    if not os.path.exists('data/schedule.json'):
        raise HTTPException(status_code=404, detail="Schedule not found")

    with open('data/schedule.json', 'r') as f:
        schedule = json.load(f)

    return schedule

if __name__ == "__main__":
    import uvicorn
    uvicorn.run(app, host="0.0.0.0", port=8000)

