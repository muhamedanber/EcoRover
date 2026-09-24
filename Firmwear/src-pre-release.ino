// Com Trigger pin for all us
#define TRIG_PIN 4

// Echo pins for the 8 us
const int echoPin[8] = {2, 3, 9, 10, A0, 13, 12, 11};
int distance[8];

// Motor driver direction control pins
#define ML1 7
#define ML2 5
#define MR1 6
#define MR2 8

// Indicator pins
#define Buzzer A1
#define LEDL   A2
#define LEDR   A3

void setup() {
  Serial.begin(9600);

  // Init common trigger pin
  pinMode(TRIG_PIN, OUTPUT);
  digitalWrite(TRIG_PIN, LOW);

  // Init echo pins as inputs
  for (int i = 0; i < 8; i++) {
    pinMode(echoPin[i], INPUT);
  }
  // Init motor control pins
  pinMode(ML1, OUTPUT);
  pinMode(ML2, OUTPUT);
  pinMode(MR1, OUTPUT);
  pinMode(MR2, OUTPUT);
  // Init alert and signal pins
  pinMode(Buzzer, OUTPUT);
  pinMode(LEDL, OUTPUT);
  pinMode(LEDR, OUTPUT);
  // Startup udio alert check
  digitalWrite(LEDL, HIGH);
  digitalWrite(LEDR, HIGH);
  digitalWrite(Buzzer, HIGH); 
  delay(300);          
  digitalWrite(Buzzer, LOW);
  digitalWrite(LEDL, LOW);
  digitalWrite(LEDR, LOW);
}

// Function to measure distance for a specific sensor index
int readDistance(int index) {
  // Trigger a 10us HIGH pulse to start measurement
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Read pulse width on target echo pin with a 25ms timeout (~400cm max range)
  long duration = pulseIn(echoPin[index], HIGH, 25000); 
  
  if (duration == 0) return 400; // Return max range if no echo received
  return duration * 0.034 / 2;    // Calculate distance in cm
}

void moveForward() {
  digitalWrite(LEDL, LOW);
  digitalWrite(LEDR, LOW);
  digitalWrite(Buzzer, LOW); 
  digitalWrite(ML1, HIGH);
  digitalWrite(ML2, LOW);
  digitalWrite(MR1, HIGH);
  digitalWrite(MR2, LOW);
}

void moveBackward() {
  digitalWrite(LEDL, HIGH);
  digitalWrite(LEDR, HIGH);
  digitalWrite(Buzzer, HIGH); 
  digitalWrite(ML1, LOW);
  digitalWrite(ML2, HIGH);
  digitalWrite(MR1, LOW);
  digitalWrite(MR2, HIGH);
}

void spinLeft() {
  digitalWrite(LEDL, HIGH);
  digitalWrite(LEDR, LOW);
  digitalWrite(Buzzer, LOW); 
  digitalWrite(ML1, LOW);
  digitalWrite(ML2, HIGH);
  digitalWrite(MR1, HIGH);
  digitalWrite(MR2, LOW);
}

void spinRight() {
  digitalWrite(LEDL, LOW);
  digitalWrite(LEDR, HIGH);
  digitalWrite(Buzzer, LOW); 
  digitalWrite(ML1, HIGH);
  digitalWrite(ML2, LOW);
  digitalWrite(MR1, LOW);
  digitalWrite(MR2, HIGH);
}

void Stop() {
  digitalWrite(ML1, LOW);
  digitalWrite(ML2, LOW);
  digitalWrite(MR1, LOW);
  digitalWrite(MR2, LOW);
  digitalWrite(LEDL, LOW);
  digitalWrite(LEDR, LOW);
  digitalWrite(Buzzer, LOW);
}

void loop() {
  // Read distances sequentially for all 8 sensors
  for (int f = 0; f < 8; f++) {
    distance[f] = readDistance(f);
    delay(10); // Short delay to reduce ultrasonic cross-talk interference
  }

  // Check minimum obstacle distance in front (sensors 0 and 1)
  int frontDistance = min(distance[0], distance[1]);

  if (frontDistance >= 20) {
    moveForward();
  } 
  else {
    Stop();
    delay(200);
    moveBackward();
    delay(500);

    // Turn toward the side with more clearance
    if (distance[6] > distance[2]) {
      spinLeft();
    } else {
      spinRight();
    }
    delay(600);
  }
}
