- Proteus circuit (First Setup Libraries)

- Arduino Code (include Blynk lib, through manage lib)

- Blynk Mobile App Setup.

- VSPE (Pair, COM2 -> COM1)

- For Blynk Server-
1.) go to C:\Users\lenovo\Documents\Arduino\libraries\Blynk\scripts
2.) open cmd here
3.) Run following commands:
        3.1) dir
        3.2) blynk-ser.bat -c COM1 -p 8442
4.) Enjoy!


- Say Hello! to google assistant.
  IFTTT -> Applet -> ON= {1}
  
  - Google Assistant : 2 request
  - webhooks web request : http://188.166.206.43/{auth.key}/update/D13
  - Method: Put
  - Application/Jason
  - Body(for ON): ["1"] 