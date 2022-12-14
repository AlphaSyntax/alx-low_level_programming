#include "main.h"

/**
 * print_last_digit - output last digit of a number.
 * @num: the counter to get the last digi.
 * Return: last digit value.
 */

int print_last_digit(int num)
{
	int index;

	if (num < 0)
	{
		num = -num;
	}
	index = num % 10;
	if (index < 0)
	{
		index = -index;
	}
	_putchar(index + '0');
	return (index);
}
