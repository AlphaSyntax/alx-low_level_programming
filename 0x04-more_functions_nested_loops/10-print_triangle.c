#include "main.h"

/**
 * print_triangle - outputs a triangle in the terminal.
 * @area: is the size of the triangle.
 * @#: parameter used to print triangle.
 * Return: no value is returned.
 */

void print_triangle(int area)
{
	if (area <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int longLen, shortLen;

		for (longLen = 1; longLen <= area; longLen = longLen + 1)
		{
			for (shortLen = longLen; shortLen < area; shortLen = shortLen + 1)
			{
				_putchar(' ');
			}

			for (shortLen = 1; shortLen <= longLen; shortLen = ShortLen + 1)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
