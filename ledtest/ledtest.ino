String val = "";
int pin = 5;

void setup() {
  Serial.begin(9600);
  Serial.println("wait for data:");
  pinMode(pin, OUTPUT);
}

void loop() {
  while(Serial.available()>0) {
    val += char(Serial.read());
    delay(20);
  }
  if (val.length()>0) {
    Serial.println("val:"+val);
  }

  if(val.compareTo("open")>0){
    digitalWrite(pin, HIGH);
    delay(1000);
  }
  
  if(val.compareTo("close")>0){
    digitalWrite(pin, LOW);
    delay(1000);
  }
  
  val = "";
}
