// Experiment 1: select LED states based on an analog potentiometer reading.
const int POT_PIN = A0;
const int LED_1_PIN = 4;
const int LED_2_PIN = 5;

void setup() {
  pinMode(LED_1_PIN, OUTPUT);
  pinMode(LED_2_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(LED_1_PIN, LOW);
  digitalWrite(LED_2_PIN, LOW);

  int value = analogRead(POT_PIN);
  Serial.print("Valeur de N : ");
  Serial.println(value);

  if (value < 400) {
    digitalWrite(LED_1_PIN, HIGH);
  } else if (value < 600) {
    digitalWrite(LED_2_PIN, HIGH);
  } else {
    digitalWrite(LED_1_PIN, HIGH);
    digitalWrite(LED_2_PIN, HIGH);
  }

  delay(1000);
}
