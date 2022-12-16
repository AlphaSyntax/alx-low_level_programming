#include "main.h"
#include <stdio.h>

/**
 * print_triangle - outputs a triangle in the terminal.
 * @area: is the size of the triangle.
 * @#: parameter used to print triangle.
 * Return: no value is returned.
 */

void print_triangle(int area)
{
	int long1, short1;

	if (area > 0)
	{
		for (long1 = 1; long1 <= area; (long1 = long1 + 1))
		{
			for ((short1 = area - long1); short1 > 0; short1--)
			{
				putchar(' ');
			}
			for (short1 = 0; short1 < long1; (short1 = short1 + 1))
			{
				putchar('#');
			}
			if (long1 == area)
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
