int led=13;
// attach a wire to pin 3
int wire=3;
void setup() {
 pinMode(led, OUTPUT);
 // configure the pin for INPUT
 pinMode(wire, INPUT);
}

void loop() {
 // the pin reads HIGH, blink the LED.
 if (digitalRead(wire)) {
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
 }
}






