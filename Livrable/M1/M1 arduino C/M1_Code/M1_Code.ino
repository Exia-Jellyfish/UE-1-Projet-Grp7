#define SEUIL 2
#define SECS 100

unsigned long long int tps;   // Temps écoulé depuis reset
unsigned int ti=0;            // compteur d'itération de while
unsigned int prev=0;          // valeur précédente
unsigned int beatone=0;         
unsigned int beatwo=0;        // dates a comparer pour obtenir le dt entre 2beats
                              //beatwo-beatone=dt


void setup ()
  { 
    Serial.begin(9600);    
  }  
 void loop ()
  { 
   tps=0;
   while (tps<(100000))
    {
      
      if ((analogRead(0)>=SEUIL)&&(prev<SEUIL)&&(tps!=0))
           {
            
            prev = analogRead(0);
            tps = (millis()-(SECS*ti*1000));
            beatone=beatwo;
            beatwo=tps;                     
            Serial.println(millis());
            Serial.println(";");
            Serial.println(60000/(beatwo-beatone));
            delay(500);                    
           }
      
        
       else if ((analogRead(0)>=SEUIL)&&(prev<SEUIL)&&(tps==0))
          {
            prev = analogRead(0);
            tps = (millis()-(SECS*ti*1000));         
            beatone=beatwo;
            beatwo=tps;
            delay(500);       
          }
        
       else
        {
          prev = analogRead(0);
         tps = (millis()-(SECS*ti*1000));
        }
    }  
   ti=ti+1;  
}
  

   
