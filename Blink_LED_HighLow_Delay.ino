#define LED_PIN 13
#define LED_PIN2 12

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH); 
  digitalWrite(LED_PIN2, LOW);
  delay(1000);                   
  digitalWrite(LED_PIN, LOW);   
  digitalWrite(LED_PIN2, HIGH);
  delay(1000);                      
}