# Arduino Sensor & Actuator Experiments

A collection of four **Arduino Uno** practical experiments covering analog inputs, temperature and humidity sensing, LCD output, LEDs, buzzers, and servo control. Reorganized from the April 2026 *TP2 — Électronique embarquée et programmation Arduino* lab report.

## Experiments

| # | Experiment | Skills |
| --- | --- | --- |
| 1 | [Potentiometer LED Control](01-potentiometer-led-control/) | ADC, thresholds, digital outputs |
| 2 | [LM35 Temperature Classification](02-lm35-temperature-classifier/) | Analog sensing, unit conversion, classification |
| 3 | [DHT11 LCD Alarm System](03-dht11-lcd-alert-system/) | Digital sensors, LCD, threshold alarms |
| 4 | [Two-Button Servo Control](04-servo-two-button-control/) | Push buttons, actuator positioning |

Each experiment contains a ready-to-open `.ino` sketch, its own `README.md`, a Proteus circuit screenshot, and original real-hardware photos extracted from the report.

## Getting started

1. Install [Arduino IDE](https://www.arduino.cc/en/software) and connect an **Arduino Uno**.
2. Open any experiment folder, then its `.ino` file. (Each sketch filename matches its containing folder, so Arduino IDE can open it directly.)
3. Select **Tools → Board → Arduino Uno** and the correct serial port.
4. Follow the experiment's wiring instructions, install any listed libraries, and upload.
5. Use the Serial Monitor at 9600 baud for Experiments 1 and 2.

### Arduino CLI examples

```bash
arduino-cli compile --fqbn arduino:avr:uno 01-potentiometer-led-control
arduino-cli compile --fqbn arduino:avr:uno 02-lm35-temperature-classifier
```

For experiments requiring third-party libraries, install them as described in their READMEs.

## Repository structure

```text
arduino-sensor-actuator-labs/
├── README.md
├── LICENSE-NOTICE.md
├── .gitignore
├── 01-potentiometer-led-control/
│   ├── 01-potentiometer-led-control.ino
│   ├── README.md
│   └── images/
├── 02-lm35-temperature-classifier/
│   ├── 02-lm35-temperature-classifier.ino
│   ├── README.md
│   └── images/
├── 03-dht11-lcd-alert-system/
│   ├── 03-dht11-lcd-alert-system.ino
│   ├── README.md
│   └── images/
└── 04-servo-two-button-control/
    ├── 04-servo-two-button-control.ino
    ├── README.md
    └── images/
```

## Original report and acknowledgments

Based on a group lab report completed at **École des Nouvelles Sciences et Ingénierie** (April 2026). The report credits **Elmachoudi Otman, Tali Mohamed Reda, Boutenfit Badr, Ajbar Ayoub, and Elkaitouni Mohamed Amine**, supervised by **M. Baala Youssef**. The experimental photographs and Proteus diagrams in this repository were extracted from that report.

The sketches were transcribed, reformatted, and lightly improved for usability; see each experiment's notes for differences. Hardware operation and compilation have **not** been independently verified on a physical Arduino.

**Publishing note:** The lab report is collaborative. Check with the other contributors that you may publicly redistribute the photos, diagrams, and adapted lab material before publishing this repository. See [LICENSE-NOTICE.md](LICENSE-NOTICE.md).
