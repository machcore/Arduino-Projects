#include <DHT.h>
#include <LiquidCrystal.h>

// DHT library: Adafruit DHT sensor library (+ Adafruit Unified Sensor).
const int DHT_PIN = 8;
const int LED_PIN = 7;
const int BUZZER_PIN = 6;
const float ALARM_THRESHOLD_C = 30.0;

DHT dht(DHT_PIN, DHT11);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  dht.begin();
  lcd.begin(16, 2);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // Use float so a failed DHT reading (NaN) can be detected.
  float humidity = dht.readHumidity();
  float temperatureC = dht.readTemperature();

  if (isnan(humidity) || isnan(temperatureC)) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("DHT read error");
    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);
    delay(2000);
    return;
  }

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperatureC, 1);
  lcd.print(" C");
  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
  lcd.print(humidity, 0);
  lcd.print("%");

  bool alarm = (temperatureC >= ALARM_THRESHOLD_C);
  digitalWrite(LED_PIN, alarm ? HIGH : LOW);
  digitalWrite(BUZZER_PIN, alarm ? HIGH : LOW);
  delay(2000);
}
