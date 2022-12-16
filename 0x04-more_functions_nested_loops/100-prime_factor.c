#include <stdio.h>

/**
 * *main - outputs biggest prime factor of a number.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int counter;
	long num = 612852475143;

	while ((++counter) < (num / 2))
	{
		if (0 == (num % counter))
		{
			num = num / 2;
			continue;
		}

		for (counter = 3; counter < (num / 2); (counter = counter + 2))
		{
			if (0 == (num % counter))
			{
				num = num / counter;
			}
		}
	}
	printf("%ld\n", num);
	return (0);
}
