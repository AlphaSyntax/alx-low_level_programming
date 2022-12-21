#include "main.h"

/**
 * puts_half - Outputs half of a string.
 * for odd length, oddLen = (len + 1) / 2.
 *
 * @string: string input
 * Return: half of string input.
 *
 */

void puts_half(char *string)
{
	int len = 0;
	int oddLen, index;

	for (index = 0; string[index] != '\0'; index++)
	{
		len = len + 1;
	}
	oddLen = (len / 2);

	if ((len % 2) == 1)
	{
		oddLen = ((len + 1) / 2);
	}

	for (index = oddLen; string[index] != '\0'; index++)
	{
		_putchar(string[index]);
	}
	_putchar('\n');
}
