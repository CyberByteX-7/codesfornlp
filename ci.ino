#define S2 6
#define S3 7
#define sensorOut 8
int red = 0;
int green = 0;
int blue = 0;
void setup() {
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);
  Serial.begin(9600);
}
void loop() {
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  red = pulseIn(sensorOut, LOW);
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);
  blue = pulseIn(sensorOut, LOW);
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);
  green = pulseIn(sensorOut, LOW);
  Serial.print("R: "); Serial.print(red);
  Serial.print(" G: "); Serial.print(green);
  Serial.print(" B: "); Serial.println(blue);
  delay(1000);
}
