void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);
  digitalWrite(13, HIGH);
  delay(5000);
  digitalWrite(2, LOW);
  digitalWrite(13, LOW);
  delay(5000);

}
