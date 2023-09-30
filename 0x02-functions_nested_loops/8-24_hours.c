#include "main.h"

/**
 * jack_bauer - Prints every minutes of the day.
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++) /*Loop for hours from 0 to 23*/
	{
		for (minute = 0; minute < 60; minute++) /*Loop for minutes from 0 to 59*/
		{
			/*Print the current hour and minute in the format "HH:MM"*/
			_putchar((hour / 10) + '0'); /*Print the tens digit of the hour*/
			_putchar((hour % 10) + '0'); /*Print the units digit of the hour*/
			_putchar(':'); /*Print the colon separator*/
			_putchar((minute / 10) + '0'); /*Print the tens digit of the minute*/
			_putchar((minute % 10) + '0'); /*Print the units digit of the minute*/
			_putchar('\n'); /*Print a newline character to move to the next line*/
		}
	}
}
