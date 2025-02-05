import React, { useState, useEffect } from 'react';
import './App.css';

function App() {
  const [startDate, setStartDate] = useState('');
  const [endDate, setEndDate] = useState('');
  const [subjectRatio, setSubjectRatio] = useState([]);
  const [schedule, setSchedule] = useState(null);
  const [currentDate, setCurrentDate] = useState('');
  const [currentPeriod, setCurrentPeriod] = useState('');

  useEffect(() => {
    const now = new Date();
    const date = now.toISOString().split('T')[0].replace(/-/g, ''); // Format: YYYYMMDD
    setCurrentDate(date);

    const hours = now.getHours();
    let period = '';
    if (hours >= 6 && hours < 12) {
      period = 'morning';
    } else if (hours >= 12 && hours < 18) {
      period = 'afternoon';
    } else {
      period = 'evening';
    }
    setCurrentPeriod(period);
  }, []);

  const handleChange = (index, e) => {
    const { name, value } = e.target;
    const newSubjectRatio = [...subjectRatio];
    newSubjectRatio[index] = { ...newSubjectRatio[index], [name]: value };
    setSubjectRatio(newSubjectRatio);
  };

  const addSubject = () => {
    setSubjectRatio([...subjectRatio, { subject: '', ratio: 1 }]);
  };

  const removeSubject = (index) => {
    const newSubjectRatio = subjectRatio.filter((_, i) => i !== index);
    setSubjectRatio(newSubjectRatio);
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

  const handleLoad = async () => {
    const response = await fetch('http://localhost:8000/get_schedule/');
    if (response.ok) {
      const result = await response.json();
      setSchedule(result);
    } else {
      alert("No schedule found!");
    }
  };

  return (
    <div className="app-container">
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
        {subjectRatio.map((subject, index) => (
          <div key={index}>
            <label>Subject:</label>
            <input type="text" name="subject" value={subject.subject} onChange={(e) => handleChange(index, e)} />
            <label>Ratio:</label>
            <input type="number" name="ratio" value={subject.ratio} onChange={(e) => handleChange(index, e)} />
            <button type="button" onClick={() => removeSubject(index)}>Remove</button>
          </div>
        ))}
        <button type="button" onClick={addSubject}>Add Subject</button>
        <button type="submit">Create Schedule</button>
      </form>
      <button onClick={handleLoad}>Load Schedule</button>
      {schedule && (
        <div className="schedule-container">
          <h2>Generated Schedule:</h2>
          <table>
            <thead>
              <tr>
                <th>Date</th>
                <th>Morning</th>
                <th>Afternoon</th>
                <th>Evening</th>
              </tr>
            </thead>
            <tbody>
              {Object.keys(schedule).map(date => (
                <tr key={date}>
                  <td>{date}</td>
                  <td className={currentDate === date && currentPeriod === 'morning' ? 'highlight' : ''}>{schedule[date].morning}</td>
                  <td className={currentDate === date && currentPeriod === 'afternoon' ? 'highlight' : ''}>{schedule[date].afternoon}</td>
                  <td className={currentDate === date && currentPeriod === 'evening' ? 'highlight' : ''}>{schedule[date].evening}</td>
                </tr>
              ))}
            </tbody>
          </table>
        </div>
      )}
    </div>
  );
}

export default App;

