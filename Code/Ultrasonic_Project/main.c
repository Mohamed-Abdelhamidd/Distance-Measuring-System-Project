#include "ultrasonic.h"
#include "lcd.h"
#include <avr/io.h>

int main ()
{

	uint16 value = 0;

	SREG |= (1<<7);

	LCD_init ();
	ULTRASONIC_init();
	LCD_clearScreen();
	LCD_displayString("Ultrasonic Proj.");
	LCD_moveCursor(1, 0);
	LCD_displayString("----------------");
	LCD_moveCursor(2, 0);
	LCD_displayString("Distance= ");
	LCD_moveCursor(2, 14);
	LCD_displayString("cm");

	for (;;)
	{
		value = ULTRASONIC_readDistance();
		if (value >= 100){
			LCD_moveCursor(2, 10);
			LCD_intgerToString(value);
		}
	    if ((value >= 10) && (value < 100))
		{
			LCD_moveCursor(2, 10);
			LCD_intgerToString(value);
			LCD_moveCursor(2, 12);
			LCD_displayCharacter(' ');
		}
		if ((value <= 9) && (value > 1))
		{
			LCD_moveCursor(2, 10);
			LCD_intgerToString(value);
			LCD_moveCursor(2, 11);
			LCD_displayCharacter(' ');
			LCD_moveCursor(2, 12);
			LCD_displayCharacter(' ');
		}

	}
}


