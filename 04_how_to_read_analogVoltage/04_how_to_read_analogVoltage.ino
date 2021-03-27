int readPin=A3;
float V2=0;
int delayTime=500;
int readVal;
void setup() {
pinMode(readPin, INPUT);
Serial.begin(9600);
}

void loop() {
readVal=analogRead(readPin);
V2=(5./1023.)*readVal;    // here "." is used to not to get a round off integer value, insted it will give value with decimal
Serial.println(V2);
delay(delayTime);
}
/* NOTE: analogRead = (5/1023)* readValue
   Like analogWrite, which have value b/w 0 - 255, analogRead have value in b/w 0 - 1023   
*/
