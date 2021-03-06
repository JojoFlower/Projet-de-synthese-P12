#include "Arduino.h"
#include "Robot.h"


Robot::Robot(int a1, int a2, int b1, int b2, int pwma, int pwmb)
{
    // for some reason you are not allowed to use B1 as variable name
    pinMode(a1, OUTPUT);
    pinA1 = a1;

    pinMode(a2, OUTPUT);
    pinA2 = a2;

    pinMode(b1, OUTPUT);
    pinB1 = b1;

    pinMode(b2, OUTPUT);
    pinB2 = b2;

    pinMode(pwma, OUTPUT);
    pinPWMA = pwma;

    pinMode(pwmb, OUTPUT);
    pinPWMB = pwmb;	
}
	
void Robot::avancer()
{
    analogWrite(pinPWMA, 100); // 2eme argument : rapport cyclique 0..255
    analogWrite(pinPWMB, 100);

    digitalWrite(pinA1, HIGH);
    digitalWrite(pinA2, LOW);

    digitalWrite(pinB1, HIGH);
    digitalWrite(pinB2, LOW);

    delay(1000);

    analogWrite(pinPWMA, 0);
    analogWrite(pinPWMB, 0);
}


void Robot::reculer()
{
    analogWrite(pinPWMA, 100);
    analogWrite(pinPWMB, 100);

    digitalWrite(pinA1, LOW);
    digitalWrite(pinA2, HIGH);

    digitalWrite(pinB1, LOW);
    digitalWrite(pinB2, HIGH);	

    delay(1000);

    analogWrite(pinPWMA, 0);
    analogWrite(pinPWMB, 0);
}


void Robot::tourneDroite()
{
    analogWrite(pinPWMA, 100);
    analogWrite(pinPWMB, 100);

    digitalWrite(pinA1, HIGH);
    digitalWrite(pinA2, LOW);

    digitalWrite(pinB1, LOW);
    digitalWrite(pinB2, HIGH);	

    delay(480);

    analogWrite(pinPWMA, 0);
    analogWrite(pinPWMB, 0);
}


void Robot::tourneGauche()
{
    analogWrite(pinPWMA, 100);
    analogWrite(pinPWMB, 100);

    digitalWrite(pinA1, LOW);
    digitalWrite(pinA2, HIGH);

    digitalWrite(pinB1, HIGH);
    digitalWrite(pinB2, LOW);
    	
    delay(480);

    analogWrite(pinPWMA, 0);
    analogWrite(pinPWMB, 0);
}


void Robot::afficher(String mot)
{
    Serial.println(mot);
}
