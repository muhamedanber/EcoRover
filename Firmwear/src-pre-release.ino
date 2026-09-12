const int trigPin[8] = {22, 24, 26, 28, 30, 32, 34, 36};
const int echoPin[8] = {23, 25, 27, 29, 31, 33, 35, 37};
int distance [8];

#define ENA 11
#define ENB 10
#define ML1 7
#define ML2 6
#define MR1 5
#define MR2 4
#define Cooling 8
#define Fan 9
#define Buzzer 13
#define LEDL A0
#define LEDR A1

void setup() {

  Serial.begin(9600);
  for (int i = 0; i < 8; i++)
  {
    pinMode(trigPin[i], OUTPUT);
    pinMode(echoPin[i], INPUT);
  }
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(ML1, OUTPUT);
  pinMode(ML2, OUTPUT);
  pinMode(MR1, OUTPUT);
  pinMode(MR2, OUTPUT);
  pinMode(Cooling, OUTPUT);
  pinMode(Fan, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(LEDL, OUTPUT);
  pinMode(LEDR, OUTPUT);
  digitalWrite(Cooling, HIGH);
  digitalWrite(Fan, HIGH);
  digitalWrite(Buzzer, HIGH); 
  delay(1000);          
  digitalWrite(Buzzer, LOW);
  digitalWrite(LEDL, LOW);
  digitalWrite(LEDR, LOW);
}

void moveForward(int leftSpeed, int rightSpeed) {

  digitalWrite(LEDL, LOW);
  digitalWrite(LEDR, LOW);
  digitalWrite(Buzzer, LOW); 
  digitalWrite(ML1, HIGH);
  digitalWrite(ML2, LOW);
  digitalWrite(MR1, HIGH);
  digitalWrite(MR2, LOW);
  analogWrite(ENA, leftSpeed);
  analogWrite(ENB, rightSpeed);

}

void moveBackward(int leftSpeed, int rightSpeed) {

  digitalWrite(LEDL, HIGH);
  digitalWrite(LEDR, HIGH);
  digitalWrite(Buzzer, HIGH); 
  digitalWrite(ML1, LOW);
  digitalWrite(ML2, HIGH);
  digitalWrite(MR1, LOW);
  digitalWrite(MR2, HIGH);
  analogWrite(ENA, leftSpeed);
  analogWrite(ENB, rightSpeed);

}

void spinLeft(int speed) {
  digitalWrite(LEDL, HIGH);
  digitalWrite(LEDR, LOW);
  digitalWrite(Buzzer, LOW); 
  digitalWrite(ML1, LOW);
  digitalWrite(ML2, HIGH);
  digitalWrite(MR1, HIGH);
  digitalWrite(MR2, LOW);
  analogWrite(ENA, speed);
  analogWrite(ENB, speed);
}

void spinRight(int speed) {
  digitalWrite(LEDL, LOW);
  digitalWrite(LEDR, HIGH);
  digitalWrite(Buzzer, LOW); 
  digitalWrite(ML1, HIGH);
  digitalWrite(ML2, LOW);
  digitalWrite(MR1, LOW);
  digitalWrite(MR2, HIGH);
  analogWrite(ENA, speed);
  analogWrite(ENB, speed);
}

void Stop() {
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
  digitalWrite(LEDL, LOW);
  digitalWrite(LEDR, LOW);
  digitalWrite(Buzzer, LOW);
}

int readDistance(int index)
{
  digitalWrite(trigPin[index], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[index], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[index], LOW);

  long duration = pulseIn(echoPin[index], HIGH, 30000); 
  if (duration == 0) return 400; 
  return duration * 0.034 / 2;
}

void loop() {
   for (int f = 0; f < 8; f++) {
    distance[f] = readDistance(f);
    delay(10);
  }
  int frontDistance = min(distance[0], distance[1]);
  if (frontDistance >= 20)
  {
    moveForward(185, 185);
  }
  else
  {
    Stop();
    delay(200);
    moveBackward(150, 150);
    delay(500);

    if (distance[6] > distance[2])
    {
      spinLeft(150);
    }
    else 
    {
      spinRight(150);
    }
    delay(600);
  }
}
