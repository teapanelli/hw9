// read "L" light as on/off in port


int led = 13;

void setup() {
  Serial.begin(19200);
  pinMode(led, OUTPUT);

}

void loop() {
 char c;

 c = Serial.read();

 if (c =='1'){
  Serial.println ("Turning the LED on");
  digitalWrite(led, HIGH);
 }

if (c== '2'){
  Serial.println ("Turning the LED off");
  digitalWrite(led, LOW);}
}
