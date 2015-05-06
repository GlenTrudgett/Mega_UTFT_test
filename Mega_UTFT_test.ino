#include <memorysaver.h>
#include <UTFT.h>

//First we need to setup the TFT Object details before creating the object 
// 1 - Setup the fonts (3 types: SmallFont, BigFont & SevenSegNumFont)
extern uint8_t SmallFont[];


// 2 - Create the screen object
  UTFT myGLCD(ITDB32S, 38,39,40,41);


void setup() {
  // Setup the LCD
   initialize();
  
}

void loop() {
  
  

  

  //delay(5000);
}

void initialize() {
  
  
  myGLCD.InitLCD(); 
  myGLCD.setFont(SmallFont);
  
  myGLCD.clrScr();
  myGLCD.setColor(255, 0, 0);
  myGLCD.fillRect(0, 0, 319, 14);
  myGLCD.setColor(64, 64, 64);
  myGLCD.fillRect(0, 226, 319, 239);
  myGLCD.setColor(255, 255, 255);
  myGLCD.setBackColor(255, 0, 0);
  myGLCD.print("* Universal *", CENTER, 1);
  myGLCD.setBackColor(64, 64, 64);
  myGLCD.setColor(255,255,0);
  myGLCD.print("Glen Trudgett", CENTER, 227);

  myGLCD.setColor(0, 0, 255);
  myGLCD.drawRect(0, 14, 319,225);
 
 return;
}
