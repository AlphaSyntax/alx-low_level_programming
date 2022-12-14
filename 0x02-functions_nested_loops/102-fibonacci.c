#include <stdio.h>

/**
 * main - output first 50 Fibonacci numbers, from 1 and 2.
 * with comma and space separation.
 * Return: Always 0.
 */

int main(void)
{
	int counter;

	unsigned long fibo1 = 0, fibo2 = 1, total;

	for (counter = 0; counter < 50; counter++)
	{
		total = fibo1 + fibo2;
		printf("%lu", total);
		fibo1 = fibo2;
		fibo2 = total;

		if (counter  == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}

