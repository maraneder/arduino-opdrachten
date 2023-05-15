// 
#define STATE_INGEDRUKT_AAN 0
#define STATE_LOSLATEN_AAN 1
#define STATE_INGEDRUKT_UIT 2
#define STATE_LOSLATEN_UIT 3
int state = STATE_LOSLATEN_UIT;
#define LED_PIN 11
#define BUTTON_PIN 8
#define DELAY_MS 50

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  Serial.begin(9600);
  delay(500);
  Serial.println(F("init"));
}
// tussenfase zodat hij niet flikkert tijdens indrukken
void ing_aan() {
  if(digitalRead(BUTTON_PIN) == LOW){
    state = STATE_LOSLATEN_AAN;
    Serial.println(F("Ga naar loslaten aan"));
    delay(DELAY_MS);
  }
}
// als de knop is losgelaten voor de eerste keer, gaat lampje uit
void los_aan(){
  if(digitalRead(BUTTON_PIN) == HIGH){
    state = STATE_INGEDRUKT_UIT;
    Serial.println(F("Ga naar ingedrukt uit"));
    digitalWrite(LED_PIN, LOW);
    delay(DELAY_MS);
  }
}
// ook een tussenfase
void ing_uit(){
  if(digitalRead(BUTTON_PIN) == LOW){
    state = STATE_LOSLATEN_UIT;
    Serial.println(F("Ga naar loslaten uit"));
    delay(DELAY_MS);
  }
}
// als de knop is losgelaten bij de 2e keer, dan gaat de lamp aan
void los_uit(){
  // Serial.println(F("los uit called"));
  if(digitalRead(BUTTON_PIN) == HIGH){
    state = STATE_INGEDRUKT_AAN;
    Serial.println(F("Ga naar ingedrukt aan"));
    digitalWrite(LED_PIN, HIGH);
    delay(DELAY_MS);
  }
}
// doorloopt om te kijken in welke status de knop zit, zodat de knop niet knippert tijdens langer ingedrukt houden
void check_action(){
  switch(state){
    case STATE_INGEDRUKT_AAN: 
    ing_aan();
    break;

    case STATE_LOSLATEN_AAN: 
    los_aan();
    break;

    case STATE_INGEDRUKT_UIT: 
    ing_uit();
    break;

    case STATE_LOSLATEN_UIT: 
    los_uit();
    break;

  }
}

void loop() {
  check_action();

}
