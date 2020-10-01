void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
}


int led=6;
void setup() {
   pinMode(led, OUTPUT);
}

void loop() {
  //gradually increase time pin is HIGH
  for(int i=0; i<255; i++){
  analogWrite(led, i);
  delay(5);
  }
  //gradually decrease time pin is HIGH
  for(int i=255; i>0; i--){
  analogWrite(led, i);
  delay(5);
  }
}

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
     ditigalWrite(led, LOW);
     delay(500);
     }
}







