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
		int num1, num2;

		for (num1 = 1; num1 <= area; num1++)
		{
			for (num2 = num1; num2 < area; (num2 = num2 + 1))
			{
				_putchar(' ');
			}

			for (num2 = 1; num2 <= num1; num2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
