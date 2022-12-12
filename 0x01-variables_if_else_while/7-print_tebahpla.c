#include <stdio.h>

/**
 * main - Displays on a new line lowercase letters reversed
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
