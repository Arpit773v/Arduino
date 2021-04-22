int potVal;
int potPin = A3;
int buzzPin = 8;

int delayTime = 100;
void setup() {
Serial.begin(9600);
pinMode(buzzPin, OUTPUT);
pinMode(potPin, INPUT);
}

void loop() {
potVal = analogRead(potPin);
Serial.println(potVal);
if (potVal >= 100){
  digitalWrite(buzzPin, HIGH);
  delay(delayTime);
  digitalWrite(buzzPin, LOW);
}
}
