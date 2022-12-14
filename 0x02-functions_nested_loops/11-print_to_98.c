#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - outputs all natural numbers from num to 98.
 * @num: Outputs from here up to 98.
 */

void print_to_98(int num)
{
	int num1, num2;

	if (num <= 98)
	{
		for (num1 = num; num1 <= 98; num1++)
		{
			if (num1 != 98)
			{
				printf("%d, ", num1);
			}
			else if (num1 == 98)
			{
				printf("%d\n", num1);
			}
		}
	}
	else if (num >= 98)
	{
		for (num2 = num; num2 >= 98; num2--)
		{
			if (num2 != 98)
			{
				printf("%d, ", num2);
			}
			else if (num2 == 98)
			{
				printf("%d\n", num2);
			}
		}
	}
}
