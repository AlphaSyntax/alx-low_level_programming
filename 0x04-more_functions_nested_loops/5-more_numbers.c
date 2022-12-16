#include "main.h"
#include <stdio.h>

/**
 * more_numbers - outputs 0 to 14 numbers 10 times.
 * Return: no value is returned.
 */

void more_numbers(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1 = num1 + 1)
	{
		for (num2 = 0; num2 <= 14; num2 = num2 + 1)
		{
			if (num2 > 9)
			{
				putchar((num2 / 10) + '0');
			}
			putchar((num2 % 10) + '0');
		}
		putchar(10);
	}
}
