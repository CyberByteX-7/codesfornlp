int led = 7;
int button = 2;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}
void loop() {
  int state = digitalRead(button);

  if (state == HIGH) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
