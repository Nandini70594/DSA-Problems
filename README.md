# Abhaya

A continuous personal-safety risk monitor. Instead of relying on a single panic
button, Abhaya continuously scores behavioral signals — movement, location,
activity, voice — and automatically escalates its response as risk rises, with
a manual SOS as a hard override.

## Features

- Live risk score (0–100) on an animated gauge
- Four risk levels — Low / Medium / High / Critical — each with a mapped response action
- Risk history graph with threshold lines
- Live signal breakdown (Movement, Location, Activity, Voice)
- "Why risk changed" explainability panel
- Demo controls: Start Session, Simulate Escalation, Simulate De-escalation, Manual SOS

## How it works

Risk score = `movement*0.35 + location*0.25 + activity*0.25 + voice*0.15`

| Score | Level | Response |
|---|---|---|
| 0–25 | Low | Continue normal assessment |
| 26–50 | Medium | Increase assessment frequency |
| 51–75 | High | Increase monitoring, prepare emergency response |
| 76–100 | Critical | Alert contacts, share location, capture evidence |

Logic lives in `src/hooks/useRiskEngine.js`.

## Tech stack

React 19 · Vite · Recharts

## Setup

```bash
git clone https://github.com/meet-asati/Abhaya_SKH.git
cd Abhaya_SKH
npm install
npm run dev
```

Open `http://localhost:5173`.

## Demo flow

1. Start Session — ambient signals update live
2. Simulate Escalation — watch score climb Low → Critical, response action update
3. Open "Risk Explanation" to see which signal drove the change
4. Manual SOS — instant Critical override
5. Simulate De-escalation — recovers back to baseline
