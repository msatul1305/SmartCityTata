#include<time.h>
int LED = 13; // Use the onboard Uno LED
int obstaclePin = 7;  // This is our input pin
int hasObstacle = HIGH;  // HIGH MEANS NO OBSTACLE
int ext_led=11;
//int ext_led_neg=10;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(obstaclePin, INPUT);
  Serial.begin(9600);  
}
void loop() {
  time_t t=now();
  Serial.print(t);
  hasObstacle = digitalRead(obstaclePin); //Reads the output of the obstacle sensor from the 7th PIN of the Digital section of the arduino
  if (hasObstacle == LOW) //LOW means something is ahead, so illuminates the 13th Port connected LED
  {
    //Serial.println("Stop something is ahead!!");
    analogWrite(ext_led, 200);//Illuminates the 13th Port LED
  }
  else
  {
    Serial.println("Path is clear");
    analogWrite(ext_led, 100);
  }
  delay(200);
}
