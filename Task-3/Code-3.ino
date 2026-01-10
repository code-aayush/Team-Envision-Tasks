const int potPin = A0;      
const int redPin = 9;      
const int greenPin = 10;    
const int bluePin = 11;     
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}
void loop() {
  int val = analogRead(potPin); 
  int redVal = map(val, 0, 1023, 255, 0); 
  int greenVal = map(val, 0, 1023, 0, 255);
  int blueVal = (val < 512) ? map(val, 0, 511, 0, 255) : map(val, 512, 1023, 255, 0);
  analogWrite(redPin, redVal);
  analogWrite(greenPin, greenVal);
  analogWrite(bluePin, blueVal);  
  delay(10); 
}
