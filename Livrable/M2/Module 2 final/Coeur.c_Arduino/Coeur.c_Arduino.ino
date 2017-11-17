#include "param.h"
#include "coeur.h"


int pin2=2;
int pin3=3;
int pin4=4;
int pin5=5;
int pin6=6;
int pin7=7;
int pin8=8;
int pin9=9;
int pin10=10;
int pin11=11;



void setup() //initialisation de l'arduino


{

  // pinMode(Ledpin, OUTPUT

  
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
  pinMode(pin5,OUTPUT);
  pinMode(pin6,OUTPUT);
  pinMode(pin7,OUTPUT);
  pinMode(pin8,OUTPUT);
  pinMode(pin9,OUTPUT);
  pinMode(pin10,OUTPUT);
  pinMode(pin11,OUTPUT); 


  Serial.begin(9600);  

}


void loop() {

  // Main code qui tourne en boucle


 switch (choix) 

 {
    case 1:

    {
      allumer(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, ModeAffichage);

      break;

    }

    case 2:

    {
      LedSur2_1(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, ModeAffichage);

      break;

    }

    case 3:
    {

      LedSur2_2(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, ModeAffichage);

      break;

    }

    case 4:
    {

      LedSur1_3(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, ModeAffichage);

      break;

    }

    case 5:
    {

      LedSur1_4(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, ModeAffichage);

      break;

    }

    case 6:
    {

      LedSur1_5(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, ModeAffichage);

      break;

    }

    case 7:
    {

      LedSur1_6(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, ModeAffichage);

      break;

    }

    case 8:
    {

      LedSur1_7(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, ModeAffichage);

      break;

    }

    case 9:
    {

      LedSur1_8(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, ModeAffichage);

      break;

    }

    case 10:
    {

      LedSur1_9(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, ModeAffichage);

      break;

    }

    case 11:
    {

      LedSur1_10(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, ModeAffichage);

      break;

    }

    case 12:
    {

      chenille(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, ModeAffichage);

      break;

    }

  }



}
