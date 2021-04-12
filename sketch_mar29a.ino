#include <BlynkSimpleStream.h>

 // You should get Auth Token in the Blynk App.
 // Go to the Project Settings (nut icon).
 char auth[] = "yhLYI8D6XF-Ro1-Mj6axFQ733R8fVz1v";

 void setup()
 {
   Serial.begin(9600);
   Blynk.begin(auth, Serial);
   pinMode(11, OUTPUT);
   pinMode(12, OUTPUT);
   pinMode(13, OUTPUT);
 }

 BLYNK_WRITE(V1) //Button Widget is writing to pin V1
{
  int pinData = param.asInt(); 
  if(pinData==1){
    digitalWrite(11, HIGH);
  }else{
    digitalWrite(11, LOW);
  }
}

 void loop()
 {
   Blynk.run();
 }
