int analogPin = A2; // Current sensor output

const float sensitivity = 0.185;
const double offset = 4.34;
double voltage = 0;
double current = 0;

void setup() {
  Serial.begin(9600);           //  setup serial
}

void loop() {

  int sensorValue = analogRead(analogPin);

  voltage = sensorValue * 5.0 / 1024.0;
  current = (voltage - offset) / sensitivity;

  Serial.println(current);
  delay(2000);
}