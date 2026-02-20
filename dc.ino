int in1 = 9;
int in2 = 10;
void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}
void loop() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  delay(3000);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  delay(3000);
}
