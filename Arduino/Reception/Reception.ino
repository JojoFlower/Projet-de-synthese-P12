#include <SPI.h>
#include "nRF24L01.h"
#include "RF24.h"
#include "printf.h"
#include <Robot.h>

Robot robot(22,23,40,41,2,3);

RF24 radio(7,8);

const uint64_t pipe = 0xF0F0F0F0E1LL;

void setup(void)
{
  Serial.begin(57600);
  printf_begin();
  radio.begin();
  radio.openReadingPipe(1,pipe);
  radio.startListening();
  radio.printDetails();
}

void loop(void)
{
    if ( radio.available() )
    {
      // Dump the payloads until we've gotten everything
      unsigned long got_time;
      bool done = false;
      while (!done)
      {
        done = radio.read( &got_time, sizeof(unsigned long) );
        //printf("Got payload %lu...",got_time);
        //printf("\n");
        switch (got_time) {
        case 1:
          robot.tourneGauche();
          printf("Gauche\n");
          break;
        case 2:
          robot.tourneDroite();
          printf("Droite\n");
          break;
        case 3:
          robot.avancer();
          printf("Avance\n");
          break;
        case 4:
          robot.reculer();
          printf("Reculer\n");
          break;        
  }
        delay(20);
      }
}}

