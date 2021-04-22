int buzzPin = 8;
int dt1 = 1;
int dt2 = 2;
void setup() {
pinMode(buzzPin, OUTPUT);
}

void loop() {
for(int j =1; j <= 100; j += 1){
  digitalWrite(buzzPin, HIGH);
  delay(dt1);
  digitalWrite(buzzPin, LOW);
  delay(dt1);
}
for(int j =1; j <= 100; j += 1){
  digitalWrite(buzzPin, HIGH);
  delay(dt2);
  digitalWrite(buzzPin, LOW);
  delay(dt2);
}
}
