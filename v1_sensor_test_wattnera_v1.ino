// Wattnera: ACS712 Current Sensor Test Code for ESP32

const int sensorPin = 36;  // GPIO36 = VP (Analog pin on ESP32)
float sensitivity = 0.185; // For ACS712-5A: 185mV per Amp
float zeroCurrentVoltage = 2.5; // Expected voltage at 0A

void setup() {
  // put your setup code here, to run once:
 Serial.begin(115200);
  analogReadResolution(12); // 12-bit ADC for ESP32
}

void loop() {
  // put your main code here, to run repeatedly:
int analogValue = analogRead(sensorPin);
  float voltage = (analogValue * 3.3) / 4095.0;
  float current = (voltage - zeroCurrentVoltage) / sensitivity;

  Serial.print("ADC: ");
  Serial.print(analogValue);
  Serial.print(" | Voltage: ");
  Serial.print(voltage, 3);
  Serial.print(" V | Current: ");
  Serial.print(current, 3);
  Serial.println(" A");

  delay(1000);
}
