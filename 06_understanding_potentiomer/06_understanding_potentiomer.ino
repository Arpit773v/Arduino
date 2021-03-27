int myVoltpin=A2;
int readVal;
float V2;
int delayT=250;
void setup() {
Serial.begin(9600);
}

void loop() {
readVal=analogRead(myVoltpin);
V2=(5./1023.)*readVal;    // if you have problem to remember this kindly revise previous code
Serial.println(V2);
delay(delayT);
}
