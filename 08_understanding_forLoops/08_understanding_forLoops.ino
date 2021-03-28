int whitePin=6;
int bluePin=9;

int whiteTime=500;
int blueTime=500;

int whiteBlink=3;
int blueBlink=5;
void setup() {
 pinMode(whitePin, OUTPUT);
 pinMode(bluePin, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  for(int j=1; j<=whiteBlink; j+=1){
 digitalWrite(whitePin, HIGH);
 delay(whitePin);
 digitalWrite(whitePin, LOW);
 delay(whiteTime);
  }
  
  for(int j=1; j<=blueBlink; j+=1){
 digitalWrite(bluePin, HIGH);
 delay(bluePin);
 digitalWrite(bluePin, LOW);
 delay(blueTime);
  }
}
