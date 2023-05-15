// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  // doorloopt alle combinaties van kleuren rood
  for(int num = 0; num < 256; num++){
	analogWrite(9, num);
    // doorloopt alle kleurcombinaties voor blauw
    for(int num2 = 0; num2 < 256; num2++){
      analogWrite(6, num2);
  	// doorloopt alle kleurcombinaties voor groen
      for(int num3 = 0; num3 < 256; num3++){
        analogWrite(3, num3);
      }
    }
  }
}