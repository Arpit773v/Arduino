int bluePin = 12;

int numBlinks;
int blinkTime = 500;

String msg = "How many Blinks you want: ";

void setup() {
 Serial.begin(9600);
 pinMode(bluePin, OUTPUT);
}

void loop() {
 Serial.println(msg);    // asking number from user
 
 while (Serial.available() == 0){}    // this loop will make serial port to wait till user enters data

 numBlinks = Serial.parseInt();    // this will read the data entered by user
 for (int j =1; j <= numBlinks; j += 2){
  digitalWrite(bluePin, HIGH);
  delay(blinkTime);

  digitalWrite(bluePin, LOW);
  delay(blinkTime);
 }
}
