#include "dht.h"
#define dht_pin 2 // Pin sensor is connected to
 
dht DHT;
 
void setup(){
 
  Serial.begin(9600);
  delay(500);//Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing Sensor
 
}//end "setup()"
 
void loop(){
  //Start of Program 
 
    DHT.read11(dht_pin);
    
    Serial.print("h=");
    Serial.print(DHT.humidity);
    Serial.print("%;");
    Serial.print("t=");
    Serial.print(DHT.temperature); 
    Serial.println("C");
    
    delay(5000);//Wait 5 seconds before accessing sensor again.
 
  //Fastest should be once every two seconds.
 
}// end loop() 
