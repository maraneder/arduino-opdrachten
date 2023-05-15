// sluit de potmeter aan op a5
const int potPin = A5;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(A5, INPUT);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  Serial.begin(9600);
}

// functie om potmeterwaarde uit te lezen
long readPotmeter() {
  int potmeterWaarde = analogRead(potPin);
  long waarde = map(potmeterWaarde, 0, 1023, 0, 7);
  return waarde;
}

//lampjes uit en aan zetten
void loop()
{
	Serial.println(readPotmeter());
  	uit();
  	long waarde = readPotmeter();
  	lampjesAan(waarde);
}

// lampjes aan zetten bij bepaalde waarden
void lampjesAan(long waarde){
  if (waarde > 0) {
   	digitalWrite(13, HIGH); 
  }
  if (waarde > 1) {
   	digitalWrite(12, HIGH); 
  }
  if (waarde > 2) {
   	digitalWrite(11, HIGH); 
  }
  if (waarde > 3) {
   	digitalWrite(10, HIGH); 
  }
  if (waarde > 4) {
   	digitalWrite(9, HIGH); 
  }
  if (waarde > 5) {
   	digitalWrite(8, HIGH); 
  }
  if (waarde > 6) {
   	digitalWrite(7, HIGH); 
  }
  
}

// lampjes uit zetten
void uit(){
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
}