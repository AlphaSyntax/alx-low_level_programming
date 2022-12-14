#include <stdio.h>

/**
 * main - outputs all the natural numbers exclusively below 1024.
 * that are multiples of 3 or 5.
 * Return: Always 0.
 */

int main(void)
{
	int num, total = 0;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
		{
			total += num;
		}
		printf("%d\n", total);
		return (0);
	}
}
