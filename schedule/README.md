# Goal
This small project should be able to create a simple schedule web app, that can automatically create, show and of course save or reuse the schedule list accoding to the user's rough requirements(randomly).

# Basic design
We should be able to input the values like example below, where i prefer use Json:
```JSON
{
   "start_date":20250204,
   "end_date":20250631,
   "subject_ratio":{
      "math":3,
      "physics":5,
      "computer_science":2,
      "rest":1
   }
}
```

The output data should be (randomly)
```JSON
{
    20250204: {
        "morning": "physics",
        "afternoon": "math",
        "evening": "rest"
    },
    20250205: {
        "morning": "computer_science",
        "afternoon": "computer_science",
        "evening": "math"
    },
    20250206......
    20250207......
    ...
    ...
}
```

The app logic should be automatically give the result schedule accoding to the "subject_ratio" which means "how many time i should spend on corresponding certain subject".

The minimum time range should be:
  * **morning**
  * **afternoon**
  * **evening**

The basic tool used would be:
  * **fastAPI** as backend
  * **react** as frontend

# Implement
use docker command below for both frontend and backend(They are separated, so you would need use this command twice.):
```
docker-compose -p schedule_app up -d
```
