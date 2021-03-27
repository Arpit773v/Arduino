int whitePin=9;
int bright=100;
void setup() {
pinMode(whitePin, OUTPUT);
}

void loop() {
// in analog the voltage is not between 0 - 5, it is between 0 - 255
// also it has 8 bits (2^8 = 256)
analogWrite(whitePin, bright);
}
