#include <stdio.h>

/**
 * main - outputs numbers from 1 to 100,
 * and at multiples 3 and 5, outputs fizz and buzz respectively.
 * Return: Always 0 (Success).
 */

int main(void)
{
	int counter = 1;

	while (counter <= 100)
	{
		if (counter % 3 == 0 && counter % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((counter % 5) == 0)
		{
			if (counter == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else if ((counter % 3) == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d", counter);
		}
		counter = counter + 1;
	}
	return (0);
}
