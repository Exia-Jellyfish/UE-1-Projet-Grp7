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

  // pinMode(Ledpin, OUTPUT)

  
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


 switch (modeAffichage) 

 {
    case 1:

    {
      allumer(pin11, pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10,  modeAffichage);

      break;

    }

    case 2:

    {
      LedSur2_1(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, modeAffichage);

      break;

    }

    case 3:
    {

      LedSur2_2(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, modeAffichage);

      break;

    }

    case 4:
    {

      LedSur1_3(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, modeAffichage);

      break;

    }

    case 5:
    {

      LedSur1_4(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, modeAffichage);

      break;

    }

    case 6:
    {

      LedSur1_5(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, modeAffichage);

      break;

    }

    case 7:
    {

      LedSur1_6(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, modeAffichage);

      break;

    }

    case 8:
    {

      LedSur1_7(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, modeAffichage);

      break;

    }

    case 9:
    {

      LedSur1_8(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, modeAffichage);

      break;

    }

    case 10:
    {

      LedSur1_9(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, modeAffichage);

      break;

    }

    case 11:
    {

      LedSur1_10(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, modeAffichage);

      break;

    }

    case 12:
    {

      chenille(pin11,  pin2,  pin3,  pin4,  pin5,  pin6,  pin7,  pin8,  pin9,  pin10, modeAffichage);

      break;

    }

  
 /* case 13:
  {
    led1 (int pin11, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10, int modeAffichage);
    break;
  }

      case 14:
  {
    led2 (int pin11, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10, int modeAffichage);
    break;
  } 
    case 15:
  {
    led3 (int pin11, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10, int modeAffichage);
    break;
  }

    case 16:
  {
    led4 (int pin11, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10, int modeAffichage);
    break;
  }

  case 17:
  {
    led5 (int pin11, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10, int modeAffichage);
    break;
  }
    case 18:
  {
    led6 (int pin11, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10, int modeAffichage);
    break;
  }

    case 19:
  {
    led7 (int pin11, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10, int modeAffichage);
    break;
  }
  
  case 20:
  {
    led8 (int pin11, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10, int modeAffichage);
    break;
  }

    case 21:
  {
    led9 (int pin11, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10, int modeAffichage);
    break;
  }*/
}
}


