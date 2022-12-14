#include "main.h"

/**
 * print_sign - Output the sign of anumber.
 * @num: the number to check.
 * Return: 1 and output + if num is >
 * 0 and output 0 if num is 0
 * -1 and output - if num is <
 */

int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (num < 0)
	{
		_putchar('-');
	}
	return (-1);
}
