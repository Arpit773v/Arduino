/*
WAP to take choice from user to lit up that colored LED
*/

// declaring pins for respective LEDs
int redLed = 2;
int greenLed = 3;
int blueLed = 4;

String myResponse;
String msg1 = "Choose one out of the LEDs:";
String msg2 = "Red    Green    Blue";

void setup() {
  
pinMode(redLed, OUTPUT);
pinMode(greenLed, OUTPUT);
pinMode(blueLed, OUTPUT);

Serial.begin(9600);
}

void loop() {
Serial.print(msg1);
Serial.println(msg2);    // prompt for user

while (Serial.available == 0){};    // waits for user's input


}
