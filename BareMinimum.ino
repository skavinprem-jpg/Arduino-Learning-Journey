void setup() {
  // Tell the Arduino that Pin 13 is an output path for power
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); // 1. Turn the light ON
  delay(1000);            // 2. Wait for 1 second (1000 milliseconds)
  
  digitalWrite(13, LOW);  // 3. Turn the light OFF
  delay(1000);            // 4. Wait for 1 second before looping back
}


