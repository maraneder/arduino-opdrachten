#define DELAY 50

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  // cyclus lampjes aan en uit zodat het het effect krijgt dat ze doorlopen
  delay(DELAY);
  digitalWrite(12, HIGH);
  delay(DELAY);
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  delay(DELAY);
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  delay(DELAY);
  digitalWrite(11, LOW);
  digitalWrite(9, HIGH);
  delay(DELAY);
  digitalWrite(10,LOW);
  digitalWrite(8, HIGH);
  delay(DELAY);
  digitalWrite(9, LOW);
  digitalWrite(7, HIGH);
  delay(DELAY);
  digitalWrite(8, LOW);
  digitalWrite(6, HIGH);
  delay(DELAY);
  digitalWrite(7, LOW);
  delay(DELAY);

  delay(DELAY);
  digitalWrite(7, HIGH);
  delay(DELAY);
  digitalWrite(8, HIGH);
  digitalWrite(6, LOW);
  delay(DELAY);
  digitalWrite(7, LOW);
  digitalWrite(9, HIGH);
  delay(DELAY);
  digitalWrite(10, HIGH);
  digitalWrite(8, LOW);
  delay(DELAY);
  digitalWrite(11, HIGH);
  digitalWrite(9, LOW);
  delay(DELAY);
  digitalWrite(12, HIGH);
  digitalWrite(10, LOW);
  delay(DELAY);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(11, LOW);
  delay(DELAY);

}


