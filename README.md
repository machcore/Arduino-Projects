# Arduino Sensor & Actuator Experiments

A collection of four **Arduino Uno** practical experiments covering analog inputs, temperature and humidity sensing, LCD output, LEDs, buzzers, and servo control. Électronique embarquée et programmation Arduino* lab report.

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

