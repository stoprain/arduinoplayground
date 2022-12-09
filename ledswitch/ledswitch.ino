const int buttonPin = 8;
const int ledPin =  5;

int buttonState = 0;      

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); 
  pinMode(buttonPin, INPUT); 
}

void loop() {
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  if (buttonState == 1) {
    Serial.println("light");
    digitalWrite(ledPin, HIGH);
  } else {
    //LED熄滅
    Serial.println("off");
    digitalWrite(ledPin, LOW);
  }
}