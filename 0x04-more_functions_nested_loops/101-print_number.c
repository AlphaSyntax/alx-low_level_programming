#include "main.h"

/**
 * print_number - output integer number.
 *
 * @num1: int number to be output.
 *
 */

void print_number(int num1)
{
	unsigned int num2;

	if (num1 < 0)
	{
		num2 = (num1 * -1);
		_putchar('-');
	}
	else
	{
		num2 = num1;
	}

	if (num1 / 10)
	{
		print_number(num2 / 10);
	}
	_putchar((num2 % 10) + '0');
}
