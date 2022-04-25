const byte ledPin = 2;
const byte soundPin = 3;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(soundPin, INPUT);
}

void loop() {
  readSound(); // detecta a presença de som
}

void readSound() {
  if(digitalRead(soundPin)) {  
    digitalRead(ledPin) ? digitalWrite(ledPin, LOW) : digitalWrite(ledPin, HIGH); // acende ou apaga o led
    delay(150);
  }  
}
