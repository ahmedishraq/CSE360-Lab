int ledpin = 7;
int button = 8;
int buzzer = 6;

void setup() {
pinMode(ledpin, OUTPUT);
pinMode(button, INPUT_PULLUP); // INPUT_PULLUP act as in build resistor for button
pinMode(buzzer, OUTPUT);
}

void loop() {
  if(digitalRead(button) == LOW){
      digitalWrite(ledpin, HIGH);
      digitalWrite(buzzer, HIGH);
      delay(1000);    
  }
  else{
      digitalWrite(ledpin, LOW);
      digitalWrite(buzzer, LOW);
      delay(1000);
  }

}
