#define LED_PIN 13
#define LED_PIN2 12

unsigned long previousMillis = 0;
const long interval = 1000;  
bool ledState = false;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;  

    ledState = !ledState;

    if (ledState) {
      digitalWrite(LED_PIN, HIGH);
      digitalWrite(LED_PIN2, LOW);
    } else {
      digitalWrite(LED_PIN, LOW);
      digitalWrite(LED_PIN2, HIGH);
    }
  }
}