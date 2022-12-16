#include "main.h"
#include <stdio.h>

/**
 * print_triangle - outputs a triangle in the terminal.
 * @area: is the size of the triangle.
 * @#: parameter used toprint triangle.
 * Return: no value is returned.
 */

void print_triangle(int area)
{
	int longLen, shortLen;

	if (area > 0)
	{
		for (longLen = 1; longLen <= area; longLen = longLen + 1)
		{
			for (shortLen = area - longLen; shortLen > 0; shortLen = shortLen - 1)
			{
				putchar(' ');
			}
			for (shortLen = 0; shortLen < longLen; shortLen = shortLen + 1)
			{
				putchar('#');
			}
			if (longLen == area)
				continue;

			putchar('\n');
		}
	}
	putchar('\n');
}
