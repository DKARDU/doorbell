#include "U8glib.h"
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE);
#include <RH_ASK.h>
#include <SPI.h>
#include <Adafruit_MLX90614.h>
#define trig_Pin  2
#define echo_Pin  4  
long duration, cm;
RH_ASK driver;
Adafruit_MLX90614 mlx = Adafruit_MLX90614();
void setup()
{
    //pinMode(buttonPin, INPUT);
    pinMode(trig_Pin, OUTPUT);
    pinMode(echo_Pin, INPUT);
    
    Serial.begin(9600);   
    if (!driver.init())
         Serial.println("init failed"); 
}

void loop()
{
    int temp_obj = mlx.readObjectTempC();
    Serial.println("Temp:");
    Serial.print(temp_obj);
    Serial.print("\n"); 
    digitalWrite(trig_Pin, LOW);  
    delayMicroseconds(2);
    digitalWrite(trig_Pin, HIGH);  
    delayMicroseconds(10);
    digitalWrite(trig_Pin, LOW);
    duration = pulseIn(echo_Pin, HIGH);
    cm = duration*0.034/2; 
    Serial.println("distance:");
    Serial.println(cm);
   u8g.firstPage();
  do
  {
    u8g.setFont(u8g_font_9x18);
    u8g.setPrintPos(1,20);
    u8g.print("Distance:");
    u8g.print(cm);
    u8g.print("cm");
    u8g.setPrintPos(1,50);
    u8g.print("Temp:");
    u8g.print(temp_obj);
    u8g.print("*C");
  }while(u8g.nextPage()); 
    
    if (cm<10) {
      if(temp_obj >  31 && temp_obj < 37)
      {
      Serial.println("send"); 
      const char *msg = "toggle_buz";
      driver.send((uint8_t *)msg, strlen(msg));
      driver.waitPacketSent();
      delay(2000);
      }
    }
    
    if(cm>9){
      Serial.println("no"); 
      const char *msg = "toggle_no";
      driver.send((uint8_t *)msg, strlen(msg));
      driver.waitPacketSent();
    }
     if(temp_obj <= 31 || temp_obj > 38)
      {
      Serial.println("no"); 
      const char *msg = "toggle_no";
      driver.send((uint8_t *)msg, strlen(msg));
      driver.waitPacketSent();
      }
}
