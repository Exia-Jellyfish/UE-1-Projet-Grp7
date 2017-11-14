void setup() {
  // put your setup code here, to run once:
 
  Serial.begin(9600);
  

}

void loop() {
  int n=0; 
  int time;
  int dtime;
  time = millis();
  while (time<5000)
  {
    
  
 
    Serial.println(analogRead(0));
    n=n+1;
  
 
  // put your main code here, to run repeatedly:
  }
    Serial.println(n);
}
