//read button input
int ledPin = 13;
int buttonPin = 8;

void setup() {
  Serial.begin(19200);
  pinMode (ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
      digitalWrite (ledPin, HIGH);
      Serial.println("Turning LED on");
}

else {
    digitalWrite (ledPin, LOW);
}
}
