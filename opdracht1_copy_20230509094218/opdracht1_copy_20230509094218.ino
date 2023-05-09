void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(1000);
}
