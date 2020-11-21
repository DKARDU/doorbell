<a href="https://youtu.be/sbKuUkK-Hbo">
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/doorbell/menlingyoutube.jpg" /> 
</a></br>


Today we will make a Non-touch doorbell, it will detect your body temperature. In now situation, It is very important to know if someone body temperature is higher than normal, when someone is kocking.</br>
This project will shows Red light if detect any temperature higher than 38℃.</br></br>

► Code in GitHub (scheme and sketch): https://github.com/DKARDU/doorbell</br></br>

► Components</br>
The following parts were used in this project:</br>
The version of the software Arduino used is 1.8.12</br>
Arduino Nano, https://amzn.to/3ihYFBl</br>
GY-906-BCC IR Infrared Thermometry Module,</br>
433 MHz RF receiver and transmitter Module, https://amzn.to/2IWcIQl</br>
Two 220Ω, https://amzn.to/2OSGlBW</br>
RGB LED, https://amzn.to/3iGb2qO</br>
Buzzer, https://amzn.to/2BeYzu3</br>
Jumper wires, https://amzn.to/3jCHhZd</br>
Breadboard, https://amzn.to/33yEavN</br></br>

❤Subscribe It's Free https://bit.ly/2C6HdAg </br></br>

Thanks for watching, Stay home and Be safe...Have a great day!</br>
#Arduinoproject #Arduinodoorbell #Howto #COVID19</br>


<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/doorbell/Circuit%20Diagram.jpg" /></br>
Production</br>
transmit.ino</br>

1.	install the Library file: Open "Tools"-"Library Manager" in the Arduino development software, then search for  “Adafruit_MLX90614 “  and  “U8glib “ , And install them.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/doorbell/transmit%20(1).jpg" /></br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/doorbell/transmit%20(2).jpg" /></br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/doorbell/transmit%20(3).jpg" /></br>
2.	Install the Library file: Open "Sketch"-"Include Library"-"Add .ZIP Library" in the Arduino development software, Import RadioHead-master.zip.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/doorbell/transmit%20(4).jpg" /></br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/doorbell/transmit%20(5).jpg" /></br>
3.	Choose the development board as Arduino Nano, this is to choose the right.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/doorbell/transmit%20(6).jpg" /></br>
4.	Select the processor as ATmega328P(Old Bootloader), this is to choose the right.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/doorbell/transmit%20(7).jpg" /></br>
5.	Select the serial port corresponding to the development board, you can burn the code into the development board.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/doorbell/transmit%20(8).jpg" /></br>

receive.ino</br>

1.	Choose the development board as Arduino Nano, this is to choose the right.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/doorbell/receive%20(1).jpg" /></br>
2.	Select the processor as ATmega328P(Old Bootloader), this is to choose the right.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/doorbell/receive%20(2).jpg" /></br>
3.	Select the serial port corresponding to the development board, you can burn the code into the development board.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/doorbell/receive%20(3).jpg" /></br>
