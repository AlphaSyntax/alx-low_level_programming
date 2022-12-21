#include "main.h"

/**
 * print_rev - displays string in reverse on newline.
 *
 * @str: string to be reversed.
 *
 * Return: 0.
 */

void print_rev(char *str)
{
	int var1, var2;

	var1 = 0;
	while (*str != '\0')
	{
		var1++;
		str++;
	}
	str = str - 1;

	for (var2 = var1; var2 > 0; var2--)
	{
		_putchar(*str);
		str--;
	}
	_putchar('\n');

}
