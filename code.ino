int sensorPin = 2;     // IR sensor connected to digital pin 2
int ledPin = 13;       // Onboard LED

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = digitalRead(sensorPin);
  
  if (sensorValue == LOW) { // Object detected
    digitalWrite(ledPin, HIGH);
    Serial.println("Object Detected!");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("No Object");
  }

  delay(200);
}
