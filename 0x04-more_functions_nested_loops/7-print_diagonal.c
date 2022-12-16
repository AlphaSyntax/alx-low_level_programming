#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - outputs a diagonal line going down.
 * @counter: helps keep track of the line.
 * Return: no value is returned.
 */

void print_diagonal(int counter)
{
	int space, length;

	if (counter > 0)
	{
		for (length = 0; length < counter; length = length + 1)
		{
			for (space = 0; space < length; space = space + 1)
			{
				putchar(" ");
			}
			putchar('\\');

			if (length == (counter - 1))
			{
				continue;
																		}
			putchar('\n');													}
	}
	putchar('\n');
}
