#include <stdio.h>

/**
 * * main - Prints lowercase alphabet and excluding q and e
 *
 * Return: Aways 0 (Sucess)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
