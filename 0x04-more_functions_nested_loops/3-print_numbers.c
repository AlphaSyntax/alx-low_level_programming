#include "main.h"
#include <stdio.h>

/**
 * print_numbers - outputs all numbers from 0 - 9.
 * Return: nothing is returned.
 */

void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num = num + 1)
	{
		putchar(num);
	}
	putchar(10);
}
