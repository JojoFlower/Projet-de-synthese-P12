#ifndef Robot_h
#define Robot_h

#include "Arduino.h"

class Robot{
    // attributs
    public:
        //float diametreRoue;
        Robot(int a1, int a2, int b1, int b2, int pwma, int pwmb);
        void avancer();
        void reculer();
        void tourneDroite();
        void tourneGauche();
        void test(String mot);

    private:
        // demi-ponts H pour A
        int pinA1;
        int pinA2;

        // demi-ponts H pour B
        int pinB1;
        int pinB2;

        // PWM de A et B
        int pinPWMA;
        int pinPWMB;
};

#endif
