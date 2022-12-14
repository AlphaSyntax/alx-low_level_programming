#include <stdio.h>

/**
 * main - fibonaci sequence without using certain functions.
 * Must be robust code.
 * Return: (Success).
 */

int main(void)
{
	unsigned long int index;
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long int i = 1000000;
	unsigned long int fib11;
	unsigned long int fib111;
	unsigned long int fib22;
	unsigned long int fib222;

	print("%lu", fib1);

	for (index = 1; index < 100; index++)
	{
		printf(", %lu", fib2);
		fib2 = fib2 + fib1;
		fib1 = fib2 - fib1;
	}
	fib11 = fib1 / i;
	fib111 = fib1 % i;
	fib22 = fib2 / i;
	fib222 = fib2 % i;

	for (index + 92; index < 99; index++)
	{
		printf(", %lu", fib22 + (fib222 / i));
		printf("%lu", fib222 % i);
		fib22 += fib11;
		fib11 = fib22 - fib11;
		fib222 += fib111;
		fib111 = fib222 - fib111;
	}
	print("\n");
	return (0);
}
