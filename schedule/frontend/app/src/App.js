import React, { useState } from 'react';

function App() {
  const [startDate, setStartDate] = useState('');
  const [endDate, setEndDate] = useState('');
  const [subjectRatio, setSubjectRatio] = useState({
    math: 3,
    physics: 5,
    computer_science: 2,
    rest: 1,
  });
  const [schedule, setSchedule] = useState(null);

  const handleChange = (e) => {
    const { name, value } = e.target;
    setSubjectRatio((prev) => ({ ...prev, [name]: Number(value) }));
  };

  const handleSubmit = async (e) => {
    e.preventDefault();
    const response = await fetch('http://localhost:8000/create_schedule/', {
      method: 'POST',
      headers: {
        'Content-Type': 'application/json',
      },
      body: JSON.stringify({
        start_date: startDate,
        end_date: endDate,
        subject_ratio: subjectRatio,
      }),
    });
    const result = await response.json();
    setSchedule(result);
  };

  return (
    <div>
      <h1>Schedule App</h1>
      <form onSubmit={handleSubmit}>
        <div>
          <label>Start Date:</label>
          <input type="text" value={startDate} onChange={(e) => setStartDate(e.target.value)} />
        </div>
        <div>
          <label>End Date:</label>
          <input type="text" value={endDate} onChange={(e) => setEndDate(e.target.value)} />
        </div>
        <div>
          <label>Math:</label>
          <input type="number" name="math" value={subjectRatio.math} onChange={handleChange} />
        </div>
        <div>
          <label>Physics:</label>
          <input type="number" name="physics" value={subjectRatio.physics} onChange={handleChange} />
        </div>
        <div>
          <label>Computer Science:</label>
          <input type="number" name="computer_science" value={subjectRatio.computer_science} onChange={handleChange} />
        </div>
        <div>
          <label>Rest:</label>
          <input type="number" name="rest" value={subjectRatio.rest} onChange={handleChange} />
        </div>
        <button type="submit">Create Schedule</button>
      </form>
      {schedule && (
        <div>
          <h2>Generated Schedule:</h2>
          <pre>{JSON.stringify(schedule, null, 2)}</pre>
        </div>
      )}
    </div>
  );
}

export default App;

