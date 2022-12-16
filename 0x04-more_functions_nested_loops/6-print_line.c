#include "main.h"
#include <stdio.h>

/**
 * print_line - outputs a line.
 * @counter: helps keep track of line increase.
 * Return: no value is returned.
 */

void print_line(int counter)
{
	while ((counter)  > 0)
	{
		putchar("_");
	}
	counter = counter - 1;
	putchar('\n');
}
