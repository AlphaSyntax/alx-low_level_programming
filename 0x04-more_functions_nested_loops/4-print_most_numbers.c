#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - outputs whole numbers up to 9,
 * excluding 2 and 4.
 *
 * Return: nothing is returned.
 */

void print_most_numbers(void)
{
	int num;

	for (num = 48; num < 58; num = num + 1)
	{
		if ((num == 52) || (num == 50))
		{
			continue;
																	}
		putchar(num);
	}
	putchar(10);
}
