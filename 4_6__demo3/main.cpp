#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;

int main()
{
    int i;

    uLCD.cls();                             // clear the screen
    uLCD.background_color(0xFFFFFF);        // white background
    uLCD.textbackground_color(0xFFFFFF);    // white text background
    uLCD.color(0x0000FF);                   // blue text
    uLCD.cls();                             // clear the screen
    wait(1);
    uLCD.printf("\n  ID: 107061226\n");     // print the student ID
    uLCD.color(0x008800);                   // green text
    uLCD.printf("\n    COUNT DOWN  \n");    // ready for count down
    uLCD.text_width(4);                     // enlarge the text width four times
    uLCD.text_height(4);                    // enlarge the text height four times
    uLCD.circle(55, 75, 35, 0x008800);      // green circle
    for (i = 30; i >= 0; i--) {
        uLCD.locate(1, 2);                  // change the cursor location
        uLCD.printf("%2d", i);
        wait(.5);
    }
}