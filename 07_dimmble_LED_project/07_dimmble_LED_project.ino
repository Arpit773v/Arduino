int potPin=A1;    // setting potentiometer pin at A1 (for analog)
int wPin=6;    // setting white LED at ~6 (also for analog)
int potVal;    // to store potentiometer voltage in it
float LEDVal;    // to store voltage value for LED in it
float LEDVol;    // to store voltage for LED in it
void setup() {
 pinMode(potPin, INPUT);    // taking input from potentiometer which is used for LED
 pinMode(wPin, OUTPUT);    // setting output for white LED
 Serial.begin(9600);
}

void loop() {
 potVal=analogRead(potPin);    // reading and storing value of potentiometer voltage
 LEDVal=(255./1023.)*potVal;    // this is the equation analogRead and analogWrite
 analogWrite(wPin, LEDVal);    // taking output from white LED at voltage value obtained at LEDValue
 LEDVol=(5./255.)*LEDVal;
 Serial.print("The LED voltage is: ");    
 Serial.print(LEDVol);    // printing voltage for LED in Serial port
 Serial.println(" V");
}
