버튼 풀업방식

 #define BUTTON_PIN 32   // 버튼 핀
#define LED_PIN 13     // LED 핀

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP); // 풀업 저항 사용
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int 버튼상태 = digitalRead(BUTTON_PIN);

  if (버튼상태 == LOW)    // 버튼이 눌리면 LOW
    digitalWrite(LED_PIN, LOW);  // LED 끄기
  else 
    digitalWrite(LED_PIN, HIGH);   // LED 켜기
  
} 
