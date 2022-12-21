#include "main.h"

/**
 * puts2 - displays only one of the two characters.
 * beginning with the first one.
 * @string: string to be evaluated.
 * Return: character
 **/

void puts2(char *string)
{
	int index;
	int tracker = 0;
	int len = 0;
	char *ptr = string;

	while (*ptr != '\0')
	{
		ptr++;
		len++;
	}
	tracker = len - 1;

	for (index = 0 ; index <= tracker ; index++)
	{
		if (index % 2 == 0)
		{
			_putchar(string[index]);
		}
	}
	_putchar('\n');
}
