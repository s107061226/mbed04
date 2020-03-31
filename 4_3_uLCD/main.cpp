#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);

int main()
{
      uLCD.reset();                           // rsset the screen
      uLCD.background_color(0x000000);        // black background
      uLCD.textbackground_color(0x0000);      // black text background
      uLCD.color(0xFFFFFF);                   // white text
      uLCD.cls();                             // clear the screen
      wait(1);
      uLCD.printf("\nHello uLCD World\n");    // print text
      wait(3);
      uLCD.cls();                             // clear the screen
      wait(1);
      uLCD.background_color(0xFFFF00);        // yellow background
      uLCD.textbackground_color(0xFFFFFF);    // white text background
      uLCD.color(0x0000FF);                   // blue text
      uLCD.cls();                             // clear the screen
      wait(1);
      uLCD.printf("\nMy name is Johnny.\n");  // print text
      wait(3);
      uLCD.cls();                             // clear the screen
      wait(1);
      uLCD.background_color(0xFFFFFF);        // white background
      uLCD.textbackground_color(0xFFFF00);    // yellow text background
      uLCD.color(0xFF0000);                   // red text
      uLCD.set_font(FONT_12X16);              // set the text size
      uLCD.locate(30, 10);                    // set the location of the cursor
      uLCD.cls();                             // clear the screen
      wait(1);
      uLCD.printf("END");                     // printf the text
      wait(3);
      uLCD.cls();                             // clear the screen
      wait(1);
      uLCD.background_color(0x000000);        // black background
      uLCD.textbackground_color(0x000000);    // black text background
      uLCD.color(0xFFFFFF);                   // white text
      uLCD.set_font(FONT_5X7);                // set the text size
      uLCD.locate(0, 0);                      // set the location of the cursor
      uLCD.cls();                             // clear the screen
      wait(1);
      uLCD.circle(30, 30, 10, 0x00FF00);      // green circle
      wait(3);
      uLCD.cls();

}