# Arduino Digital Counter (0–30) Using Two 7-Segment Displays

## 📌 Project Overview

This project implements a digital counter using an **Arduino Uno, two 7-segment displays, and BCD-to-7-segment decoder ICs (CD4511)**.

The counter displays numbers from **0 to 30**, incrementing automatically at an interval of 600 milliseconds. One display shows the tens digit, while the other shows the units digit.

The Arduino generates the BCD output signals, which are sent to the decoder ICs to display the corresponding digits.

## 🎯 Objectives

- Design a digital counter that counts from 0 to 30.
- Interface two 7-segment displays with an Arduino Uno.
- Understand BCD (Binary-Coded Decimal) representation.
- Learn digital output control using Arduino.
- Understand decoder IC interfacing and digital display operation.

## 🧰 Components Required

- Arduino Uno
- Two 7-segment displays (common-cathode type when using CD4511)
- Two CD4511 BCD-to-7-segment decoder ICs
- Breadboard
- Jumper wires
- Current-limiting resistors
- USB cable for Arduino programming

## 🔌 Pin Connections

The Arduino uses eight digital output pins to control the two decoder ICs.

| Arduino Pin | Function |
|---|---|
| D2 | Tens digit BCD bit 0 (A) |
| D3 | Tens digit BCD bit 1 (B) |
| D4 | Tens digit BCD bit 2 (C) |
| D5 | Tens digit BCD bit 3 (D) |
| D6 | Units digit BCD bit 0 (A) |
| D7 | Units digit BCD bit 1 (B) |
| D8 | Units digit BCD bit 2 (C) |
| D9 | Units digit BCD bit 3 (D) |

**Note:** Connect the Arduino outputs to the corresponding BCD input pins of the CD4511 ICs. Connect the decoder outputs to the 7-segment display segments through appropriate current-limiting resistors.

## ⚙️ Working Principle

1. The Arduino initializes the eight digital output pins.
2. The counter starts at 0 and increments by one.
3. Integer division (`count / 10`) calculates the tens digit.
4. Modulo (`count % 10`) calculates the units digit.
5. The `display()` function converts each decimal digit into four binary output bits.
6. The CD4511 decoder ICs convert the BCD inputs into the corresponding 7-segment signals.
7. The display updates every 600 milliseconds.
8. After displaying 30, the loop starts again from 0.

### Example Output

| Counter Value | Tens Display | Units Display |
|---:|---:|---:|
| 0 | 0 | 0 |
| 5 | 0 | 5 |
| 9 | 0 | 9 |
| 10 | 1 | 0 |
| 15 | 1 | 5 |
| 20 | 2 | 0 |
| 25 | 2 | 5 |
| 30 | 3 | 0 |

## 💻 Software Requirements

- Arduino IDE
- Arduino Uno board support
- USB cable for uploading the program

No additional Arduino libraries are required.

## 🚀 Applications

- Digital counting systems
- Electronic scoreboards
- Basic digital electronics demonstrations
- Embedded systems learning projects
- Number display systems

## 📚 Learning Outcomes

Through this project, I learned:

- Arduino digital input/output programming.
- BCD number representation.
- Interfacing decoder ICs with 7-segment displays.
- Using arrays and functions in embedded C/C++.
- Using integer division and modulo to separate decimal digits.
- Implementing an automatic counting sequence.

## 🔮 Future Enhancements

- Add push buttons to start, stop, and reset the counter.
- Add a countdown mode.
- Adjust the counting speed.
- Extend the counting range.
- Add a buzzer to indicate when the counter reaches 30.



