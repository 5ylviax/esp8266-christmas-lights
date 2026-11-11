void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);  // LED on
  delay(1000);

  digitalWrite(LED_BUILTIN, HIGH); // LED off
  delay(1000);
}