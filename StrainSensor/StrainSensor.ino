int readPin = 09;
int value = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(readPin);
  Serial.println(value);
  delay(10);
}
