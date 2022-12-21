#include "main.h"

/**
 * _puts - Displays a string in standard-out on a new line.
 * @string: string to dispaly
 */

void _puts(char *string)
{
	while (*string != '\0')
	{
		_putchar(*string++);

	}
	_putchar('\n');
}
