// Experiment 2: classify LM35 temperature and display LED patterns.
const int LM35_PIN = A1;
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

  float adcValue = analogRead(LM35_PIN);
  float temperatureC = (adcValue * 5.0 * 100.0) / 1023.0;
  Serial.print("Valeur de T : ");
  Serial.println(temperatureC);

  if (temperatureC < 10.0) {
    Serial.println("Froid");
    digitalWrite(LED_1_PIN, HIGH);
    delay(2000);
    digitalWrite(LED_1_PIN, LOW);
    delay(2000);
  } else if (temperatureC <= 30.0) {
    Serial.println("Tiede");
    digitalWrite(LED_2_PIN, HIGH);
  } else {
    Serial.println("Chaud");
    digitalWrite(LED_1_PIN, HIGH);
    digitalWrite(LED_2_PIN, LOW);
    delay(500);
    digitalWrite(LED_1_PIN, LOW);
    digitalWrite(LED_2_PIN, HIGH);
    delay(500);
  }

  delay(1000);
}
