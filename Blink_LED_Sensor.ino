#define LDR_PIN 34    
#define LED_PIN 11 

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(LDR_PIN);
  Serial.println(sensorValue);

  if (sensorValue > 2000) {   
    digitalWrite(LED_PIN, HIGH); 
  } else {
    digitalWrite(LED_PIN, LOW);   
  }

  delay(100);
}