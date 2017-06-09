#include <Robot.h>

Robot robot(22,23,40,41,2,3);

void setup() {
  Serial.begin(9600);
}

void loop() {
  robot.avancer();
  delay(1000);  
  robot.reculer();
  delay(1000);  
  robot.tourneDroite();
  delay(1000);
  robot.tourneGauche();
  delay(1000);  
}
