#include "main.h"
#include <stdio.h>

/**
 * print_square - outputs a square.
 * @area: size of tthe square.
 *
 * Return: no value is returned.
 */

void print_square(int area)
{
	int len1, len2;

	if (area > 0)
	{
		for (len1 = 0; (len1 < area); (len1 = len1 + 1))
		{
			for (len2 = 0; (len2 < (area - 1)); (len2 = len2 + 1))
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
