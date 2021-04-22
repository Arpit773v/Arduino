/*
WAP to take choice from user to lit up that colored LED
*/

// declaring variables for pins
int redLed = 2;
int greenLed = 3;
int blueLed = 4;

// prompt messages
String msg1 = "Choose the LED you want to lit it up! : Red  Green  Blue";
String msg2 = " LED is turned on!";
// declaring container variable for response
String myResponse;

void setup() {
  // setting output for LEDs respectively
    pinMode(redLed, OUTPUT);
    pinMode(greenLed, OUTPUT);
    pinMode(blueLed, OUTPUT);
Serial.begin(9600);
}

void loop() {
    Serial.println(msg1);
    while(Serial.available() == 0){};    // waiting for user input

    myResponse = Serial.readString();

    
    if (myResponse == "Red"){
        Serial.print("Red");
        Serial.println(msg2);
        
        digitalWrite(redLed, HIGH);
        digitalWrite(greenLed, LOW);
        digitalWrite(blueLed, LOW);
      }
    else if (myResponse == "Green"){
        Serial.print("Green");
        Serial.println(msg2);
        
        digitalWrite(greenLed, HIGH);
        digitalWrite(redLed, LOW);
        digitalWrite(blueLed, LOW);
      }
    else {
        Serial.print("Blue");
        Serial.println(msg2);
        
        digitalWrite(blueLed, HIGH);
        digitalWrite(redLed, LOW);
        digitalWrite(greenLed, LOW);
      }
}
