#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar('0' + (hour / 10));   /* Print hour's tens digit */
			_putchar('0' + (hour % 10));   /* Print hour's units digit */
			_putchar(':');
			_putchar('0' + (minute / 10)); /* Print minute's tens digit */
			_putchar('0' + (minute % 10)); /* Print minute's units digit */
			_putchar('\n');
		}
	}
}

