from fastapi import FastAPI
import random
from datetime import datetime, timedelta
from fastapi.middleware.cors import CORSMiddleware

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
def create_schedule(data: dict):
    start_date = datetime.strptime(str(data['start_date']), '%Y%m%d')
    end_date = datetime.strptime(str(data['end_date']), '%Y%m%d')
    subject_ratio = data['subject_ratio']
    days = (end_date - start_date).days + 1
    
    periods = ["morning", "afternoon", "evening"]
    subjects = []
    for subject, ratio in subject_ratio.items():
        subjects.extend([subject] * ratio)
    
    schedule = {}
    for day in range(days):
        current_date = (start_date + timedelta(days=day)).strftime('%Y%m%d')
        schedule[current_date] = {}
        for period in periods:
            schedule[current_date][period] = random.choice(subjects)
    
    return schedule

if __name__ == "__main__":
    import uvicorn
    uvicorn.run(app, host="0.0.0.0", port=8000)

