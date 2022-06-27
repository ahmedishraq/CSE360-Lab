int ledpin = 7;
int button = 8;

void setup() {
pinMode(ledpin, OUTPUT);
pinMode(button, INPUT);

}

void loop() {
digitalWrite(ledpin,HIGH);
delay(1000);
digitalWrite(ledpin,LOW);
delay(1000);

}
