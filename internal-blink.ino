int pin = 2;

void setup() {
  pinMode(pin, OUTPUT);
}

bool state = HIGH;

void loop() {
  digitalWrite(pin, state);
  state = !state;
  delay(1000);
}
