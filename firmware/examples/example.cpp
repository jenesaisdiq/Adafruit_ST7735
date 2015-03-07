#define cs   A2
#define dc   D0
#define rst  0  

#include "Adafruit_ST7735.h"


Adafruit_ST7735 tft = Adafruit_ST7735(cs, dc, rst); // hardware spi

void setup() {
    
    
	tft.initG();
     
	tft.fillScreen(ST7735_BLACK);

    tft.setCursor(0, 0);
    tft.setTextColor(ST7735_WHITE);
    tft.setTextWrap(true);
    // tft.setTextSize(3);
	tft.setFont(TIMESNR_8);
    tft.print("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur adipiscing ante sed nibh tincidunt feugiat. Maecenas enim massa, fringilla");     
    
    // tft.setFont(HERO_16);
    tft.print("Menan Vadivel");     

    // tft.drawLine(0, 0, tft.width()-1, tft.height()-1, ST7735_YELLOW);
    // tft.drawLine(tft.width()-1, 0, 0, tft.height()-1, ST7735_YELLOW);

    // tft.drawPixel(0, tft.height()/2, ST7735_GREEN);

}

void loop() {

}