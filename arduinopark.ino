#define trigPin 7
#define echoPin 6
#define led 13
#define led2 12
#define led3 11
#define led4 10
#define led5 9
#define led6 8
void setup() {
 Serial.begin (9600);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(led, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
 pinMode(led5, OUTPUT);
 pinMode(led6, OUTPUT);
}
void loop() {
 long duration, distance;
 digitalWrite(trigPin, LOW); 
 delayMicroseconds(2);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
 duration = pulseIn(echoPin, HIGH);
 distance = (duration/2) / 29.1;
 if (distance > 13 && distance < 200) { //green 1 
   digitalWrite(led, HIGH);
 }
 else {
   digitalWrite(led,LOW);
 }
 if (distance > 13 && distance < 125) { //green2 
     digitalWrite(led2, HIGH);
}
 else {
     digitalWrite(led2, LOW);
 }
 if (distance > 13 && distance < 100) { //yellow 1
     digitalWrite(led3, HIGH);
} 
 else {
   digitalWrite(led3, LOW);
 }
 if (distance > 13 && distance < 50) { //yellow 2
   digitalWrite(led4, HIGH);
}
 else {
   digitalWrite(led4,LOW);
 }
 if (distance > 13 && distance < 30) { //red1
   digitalWrite(led5, HIGH);
}
 else {
   digitalWrite(led5,LOW);
 }
 if (distance > 13 && distance < 20) { //red2
   digitalWrite(led6, HIGH);
}
 else {
   digitalWrite(led6,LOW); 
 }
 if (distance >=200 || distance <=13){
   Serial.println("Out of range");
 }
 else {
   Serial.print(distance);
   Serial.println(" cm");
 }   
}