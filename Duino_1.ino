main.c:
void setup ()
  { 
    Serial.begin(9600);    
  }  
 void loop ()
  { 
   beat() 
  }

   

cardio.c
#include "cardio.h"



void beat ()
{
 tps=0;
   while (tps<((SECS*1000)-1000))
    {
      
      if ((analogRead(0)>=SEUIL)&&(prev<SEUIL)&&(tps!=0))
            {
            prev=analogRead(0);
            tps=(millis()-(ti*SECS*1000));              
            beatone=beatwo;
            beatwo= tps;
            dt=beatwo-beatone;
            Serial.println(millis());
            Serial.println(";");
            Serial.println(60000/dt);
            delay(500);                    
            }
      
        
        if ((analogRead(0)>=SEUIL)&&(prev<SEUIL)&&(tps=0))
          {
            prev=analogRead(0);
            tps=(millis()-(ti*SECS*1000));              
            beatone=beatwo;
            beatwo= tps;
            dt=beatwo-beatone;
            delay(500);       
          }
        
       else
        {
          prev=analogRead(0);
          tps=(millis()-(ti*SECS*1000));
        }
    }  
   ti=ti+1;  
}
cardio.h:
#define SEUIL 2
#define SECS 100

unsigned long int tps;           // Temps écoulé depuis reset
unsigned int ti=0;            // compteur d'itération de while
unsigned int prev=0;          // valeur précédente
unsigned int beatone=0;         
unsigned int beatwo=0;        // dates a comparer pour obtenir le dt entre 2beats
unsigned int dt=0;            //beatwo-beatone=dt


void beat()
