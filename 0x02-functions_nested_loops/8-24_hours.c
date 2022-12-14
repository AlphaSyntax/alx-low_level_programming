#include "main.h"

/**
 * jack_bauer - output every minute of the day of Jack Bauer.
 * starts at 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int num1, num2;

	num1 = 0;

	while (num1 < 24)
	{
		num2 = 0;
		while (num2 < 60)
		{
			_putchar((num1 / 10) + '0');
			_putchar((num1 % 10) + '0');
			_putchar(':');
			_putchar((num2 / 10) + '0');
			_putchar((num2 % 10) + '0');
			_putchar('\n');
			num2++;
		}
		num1++;
	}
}

