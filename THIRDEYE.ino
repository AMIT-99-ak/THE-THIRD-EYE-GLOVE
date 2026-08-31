// ----------------------------
// THIRD EYE GLOVE FOR BLIND
// Without Vibration Motor
// ----------------------------

// Ultrasonic Sensor
const int trigPin = 2;
const int echoPin = 3;

// Outputs
const int buzzerPin = 10;   // Buzzer
const int ledPin = 13;      // Built-in LED

const int switchPin = 7;    // Switch (ON/OFF)

// Variables
long duration;
int distanceCm;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  pinMode(switchPin, INPUT_PULLUP); // Switch to GND

  Serial.begin(9600);
}

void loop() {

  // ----------------------------
  // System OFF (Switch not pressed)
  // ----------------------------
  if (digitalRead(switchPin) == HIGH) {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
    return;
  }

  // ----------------------------
  // Read Distance
  // ----------------------------
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH, 30000); // Timeout
  distanceCm = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distanceCm);

  // ----------------------------
  // Buzzer + LED Alert Logic
  // ----------------------------

  if (distanceCm > 200 || distanceCm <= 0) {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
  }
  else if (distanceCm > 100 && distanceCm <= 200) {
    tone(buzzerPin, 1000, 100); // short beep
    digitalWrite(ledPin, LOW);
  }
  else if (distanceCm > 50 && distanceCm <= 100) {
    tone(buzzerPin, 1500, 150);
    digitalWrite(ledPin, LOW);
  }
  else if (distanceCm > 20 && distanceCm <= 50) {
    tone(buzzerPin, 2000, 200);
    digitalWrite(ledPin, LOW);
  }
  else if (distanceCm <= 20) {
    tone(buzzerPin, 2500);   // continuous beep
    digitalWrite(ledPin, HIGH); // LED ON when very close
  }

  delay(100);
}
