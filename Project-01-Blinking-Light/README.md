/* ============================================================================
PROJECT 01: BLINKING LED
This is my very first hardware programming project! I built this to 
learn how to connect an Elegoo Uno R3 to my PC, upload code, and 
understand the core structure of an Arduino sketch.

🛠 HARDWARE USED:
- Microcontroller: Elegoo Uno R3
- Onboard Components: Built-in LED (connected to Pin 13)

🎬 PROJECT DEMO VIDEO:
(To see the code running, open the "demo.mp4" file in this folder!)
============================================================================ */

CODE

void setup() {
  // Tell the Arduino that Pin 13 is an output path for power
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); // 1. Turn the light ON
  delay(1000);           // 2. Wait for 1 second (1000 milliseconds)

  digitalWrite(13, LOW);  // 3. Turn the light OFF
  delay(1000);           // 4. Wait for 1 second before looping back
}
