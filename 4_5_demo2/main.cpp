#include "mbed.h"
#include "TextLCD.h"

TextLCD lcd(D2, D3, D4, D5, D6, D7);

int main(void)
{
    int i;

    lcd.locate(0, 0);
    lcd.printf("ID: 107061226");
    for (i = 30; i >= 0; i--) {
        lcd.locate(0, 1);
        lcd.printf("Count: %2i", i);
        wait(1);
    }
}