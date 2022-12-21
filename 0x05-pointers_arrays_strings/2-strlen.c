#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @str: the string paramete.r
 *
 * Return: length
 */

int _strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len = len + 1;
		str = str + 1;
	}
	return (len);
}
