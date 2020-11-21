#include <RH_ASK.h>
#include <SPI.h>

RH_ASK driver;
const int buzzer =  10;     
void setup()
{
    pinMode(buzzer, OUTPUT);
    Serial.begin(9600); // Debugging only
    if (!driver.init())
         Serial.println("init failed");
}

void loop()
{
    uint8_t buf[10];
    uint8_t buflen = sizeof(buf);
    if (driver.recv(buf, &buflen)) 
    {
      int i;
      String cleanInput = String((char*)buf).substring(0,10);
      String cleanInput2 = String((char*)buf).substring(0,9);
      if(cleanInput == "toggle_buz"){
        
          digitalWrite(buzzer, HIGH);
          
          }
      
       if(cleanInput2 == "toggle_no"){
       
          digitalWrite(buzzer, LOW); 
        
          }
      }
              
} 
    
