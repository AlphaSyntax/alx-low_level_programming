#include "main.h"
#include <unistd.h>

/**
 * _putchar - print output letter c to standard output.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1,&c, 1));
}
