// 8 Ultrasonic Sensors: Front (0-1), Right (2-3), Back (4-5), Left (6-7)
const int trigPins[8] = {22, 24, 26, 28, 30, 32, 34, 36};
const int echoPins[8] = {23, 25, 27, 29, 31, 33, 35, 37};
int distances[8];

#define ENA_PIN 11
#define ENB_PIN 10
#define MOTOR_LEFT_PIN1 7
#define MOTOR_LEFT_PIN2 6
#define MOTOR_RIGHT_PIN1 5
#define MOTOR_RIGHT_PIN2 4

void setup() 
{
  Serial.begin(9600);
  
  // Initialize all 8 ultrasonic sensors
  for (int i = 0; i < 8; i++) {
    pinMode(trigPins[i], OUTPUT);
    pinMode(echoPins[i], INPUT);
  }
  
  // Set motor control pins as outputs
  pinMode(ENA_PIN, OUTPUT);
  pinMode(ENB_PIN, OUTPUT);
  pinMode(MOTOR_LEFT_PIN1, OUTPUT);
  pinMode(MOTOR_LEFT_PIN2, OUTPUT);
  pinMode(MOTOR_RIGHT_PIN1, OUTPUT);
  pinMode(MOTOR_RIGHT_PIN2, OUTPUT);
}

void moveForward(int leftSpeed, int rightSpeed) {
  digitalWrite(MOTOR_LEFT_PIN1, HIGH);
  digitalWrite(MOTOR_LEFT_PIN2, LOW);
  digitalWrite(MOTOR_RIGHT_PIN1, HIGH);
  digitalWrite(MOTOR_RIGHT_PIN2, LOW);

  analogWrite(ENA_PIN, leftSpeed);
  analogWrite(ENB_PIN, rightSpeed);
}

void moveBackward(int leftSpeed, int rightSpeed) {
  digitalWrite(MOTOR_LEFT_PIN1, LOW);
  digitalWrite(MOTOR_LEFT_PIN2, HIGH);
  digitalWrite(MOTOR_RIGHT_PIN1, LOW);
  digitalWrite(MOTOR_RIGHT_PIN2, HIGH);

  analogWrite(ENA_PIN, leftSpeed);
  analogWrite(ENB_PIN, rightSpeed);
}

// Spin in place to the left (skid steering)
void spinLeft(int speed) {
  digitalWrite(MOTOR_LEFT_PIN1, LOW);
  digitalWrite(MOTOR_LEFT_PIN2, HIGH);
  digitalWrite(MOTOR_RIGHT_PIN1, HIGH);
  digitalWrite(MOTOR_RIGHT_PIN2, LOW);

  analogWrite(ENA_PIN, speed);
  analogWrite(ENB_PIN, speed);
}

// Spin in place to the right (skid steering)
void spinRight(int speed) {
  digitalWrite(MOTOR_LEFT_PIN1, HIGH);
  digitalWrite(MOTOR_LEFT_PIN2, LOW);
  digitalWrite(MOTOR_RIGHT_PIN1, LOW);
  digitalWrite(MOTOR_RIGHT_PIN2, HIGH);

  analogWrite(ENA_PIN, speed);
  analogWrite(ENB_PIN, speed);
}

void Stop() {
  analogWrite(ENA_PIN, 0);
  analogWrite(ENB_PIN, 0);
}

int readDistance(int index) {
  digitalWrite(trigPins[index], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPins[index], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPins[index], LOW);

  long duration = pulseIn(echoPins[index], HIGH, 30000); // 30ms timeout prevents hanging
  if (duration == 0) return 400; // Out of range safety default
  return duration * 0.034 / 2;
}

void loop() 
{
  // Read all 8 sensors with a short delay to prevent cross-talk noise
  for (int i = 0; i < 8; i++) {
    distances[i] = readDistance(i);
    delay(10);
  }

  // Example front clearance check (assuming sensors 0 and 1 are front-facing)
  int frontDistance = min(distances[0], distances[1]);

  if (frontDistance >= 20) {
    // Clear ahead: Drive forward at normal speed
    moveForward(185, 185);
  } else {
    // Obstacle detected: stop, back up, and turn
    Stop();
    delay(200);
    moveBackward(150, 150);
    delay(500);
    
    // Check left vs right side clearances to choose turn direction
    if (distances[6] > distances[2]) {
      spinLeft(150);
    } else {
      spinRight(150);
    }
    delay(600);
  }
}

  if(distance >= 15){
    moveForward();
  }else{
    Stop();
    delay(250);
    moveBackward();
    delay(2500);
    turnLeft();
    delay(2000);
  }
}
}
