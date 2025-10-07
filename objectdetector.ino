#define IR_PIN 19       // OUT pin from IR sensor
#define BUZZER_PIN 23   // your buzzer pin

void setup() {
  Serial.begin(115200);
  pinMode(IR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  int irState = digitalRead(IR_PIN);  // read sensor

  if (irState == LOW) {  // object detected
    Serial.println("Object detected!");
    digitalWrite(BUZZER_PIN, HIGH);   // turn buzzer ON
  } else {
    Serial.println("Clear");
    digitalWrite(BUZZER_PIN, LOW);    // buzzer OFF
  }

  delay(100);
}
