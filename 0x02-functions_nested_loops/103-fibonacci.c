#include <stdio.h>

/**
 * main - sum even-valued terms of fibonacci sequence at \n.
 * Return: Always 0 (Success).
 */

int main(void)
{
	int counter;
	unsigned long int fib1, fib2, nexTerm, total;

	fib1 = 1;
	fib2 = 2;
	total = 0;

	for (counter = 1; counter <= 40; counter++)
	{
		if (fib1 < 4000000 && ((fib1 % 2) == 0))
		{
			total = total + fib1;
		}
		nexTerm = fib1 + fib2;
		fib1 = fib2;
		fib2 = nexTerm;
	}
	printf("%lu\n", total);
	return (0);
}

