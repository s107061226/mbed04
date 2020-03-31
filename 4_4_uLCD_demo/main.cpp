// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library

#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;

int main()
{
    uLCD.printf("\n  Hello uLCD World\n");  // print text
    uLCD.printf("\n  Starting Demo...");
    uLCD.text_width(4);                     // 4X size text
    uLCD.text_height(4);
    uLCD.color(RED);
    for (int i = 10; i >= 0; --i) {
        uLCD.locate(1,2);
        uLCD.printf("%2D",i);
        wait(.5);
    }
}
