#include "main.h"
#include <unistd.h>

/**
 * _putchar - write letter to standard output.
 * @letter: printing letter.
 * Return: 1 is a success, while
 * On error, -1 is returned, and errno is assigned accordingly.
 */

int _putchar(char letter)
{
	return (write(1, &letter, 1));
}
