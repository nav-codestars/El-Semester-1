const int sensorPin = A2;  // Define the A0 pin
const float vRef = 5.0;     // Reference voltage of the microcontroller (3.3V or 5V)

const float factor = 9.0 / 1.82;

void setup() {
  Serial.begin(9600);  // Start serial communication
}

void loop() {
  int rawValue = analogRead(sensorPin);  // Read the raw analog value (0-1023)
  float voltage = (rawValue/ 1023.0) * vRef; 
  voltage = voltage * factor; // Convert to voltage
  
  Serial.println(voltage, 3);
  
  delay(2000);  // Delay 1 second
}
