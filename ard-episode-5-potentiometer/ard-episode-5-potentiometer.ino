int led = 13;
void setup() {
 pinMode(led, OUTPUT);
}

void loop() {
  int pot;
  digitalWrite(led, HIGH);
  pot = analogRead(A5);
  delay(pot);
  digitalWrite(led, LOW);
  delay(pot);
}





