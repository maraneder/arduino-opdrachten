void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  // lampje 1 aan voor 1000 ms, dan uit en dan lampje 2 aan voor 1000ms, gaan om de beurt uit
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(1000);
}
