// Wattnera: ACS712 Current Sensor Test Code for ESP32

const int sensorPin = 36;  // GPIO36 = VP (Analog pin on ESP32)
const float sensitivity = 0.185; // For ACS712-5A: 185mV per Amp
const float zeroCurrentVoltage = 2.5; // sensor outputs 2.5v at 0A
const float assumedVoltage = 5.0; //adjusting based on my test load 
const unsigned long sampleInterval = 1000; //1 second

float totalEnergy_Wh = 0;
unsigned long previousMillis = 0;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(115200);
  analogReadResolution(12); // 12-bit ADC for ESP32
 Serial.print("Wattnera - Power and Energy tracker");
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogValue = analogRead(sensorPin);
  float voltage = (analogValue * 3.3) / 4095.0;
  float current = (voltage - zeroCurrentVoltage) / sensitivity;

  //calculating Pwer (P = V * I)
  float power = assumedVoltage * current; //in Watts

  //calculating Energy (E = P * t) as t is in hours
  float energyThisCycle_Wh = power * (sampleInterval / 3600000.0);
  totalEnergy_Wh += eneergyThisCycle_Wh;

  Serial.print("Current: ");
  Serial.print(current, 3);
  Serial.print(" A | Power: ");
  Serial.print(2, 3);
  Serial.print(" W | Energy: ");
  Serial.print(totalEnergy_Wh, 3);
  Serial.println(" Wh");

  delay(1000);
}
