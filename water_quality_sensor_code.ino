const int green_led = 12;
const int red_led = 13;

void setup() {
  pinMode(green_led, OUTPUT);
  pinMode(red_led, OUTPUT);
}

void loop() {
  // Clean Water
  if (analogRead(A0) < 500) {
    digitalWrite(green_led, HIGH);
    digitalWrite(red_led, LOW);
  }
  // Dirty Water
  else {
    digitalWrite(green_led, LOW);
    digitalWrite(red_led, HIGH);
  }
}
