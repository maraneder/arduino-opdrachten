// sluit temperatuurmeter aan op a5
const int tempPin = A5;

void setup()
{
  pinMode(A5, INPUT);
  Serial.begin(9600);
}

// functie om temperatuur sensor uit te lezen
long readTempSensor(){
	int tempmeterWaarde = analogRead(tempPin);
  	long waarde = map(tempmeterWaarde, 0, 1023, 0, 500);
  return waarde;
}

// laat temperatuur zien in seriele monitor
void loop()
{
  Serial.println(readTempSensor());
}