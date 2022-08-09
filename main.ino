const int trigPin = 9;
const int echoPin = 10;

const int mtr_1_a = 3;
const int mtr_1_b = 4;
const int mtr_2_a = 5;
const int mtr_2_b = 6;

long duration;
long distance;

void setup(){
  for(int i = 5; i <= 9; i++){
    pinMode(i, OUTPUT);
  }
  
  pinMode(10, INPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  if(distance <= 25 || distance > 800){
    for(int i = 3; i <= 6; i++){
      digitalWrite(i, LOW);
    }

    // digitalWrite(3, LOW);
    // digitalWrite(4, LOW);

  } else {
    digitalWrite(mtr_1_a, HIGH);
    digitalWrite(mtr_1_b, LOW);

    digitalWrite(mtr_2_a, HIGH);
    digitalWrite(mtr_2_b, LOW);
  }
  delay(5);
}