#include "main.h"

/**
 * rev_string - function reverse a given string.
 * @str: input string
 * Return: string in reverse.
 *
 **/

void rev_string(char *str)
{
	int index;
	int j = 0;
	char rev = str[0];

	while (str[j] != '\0')
	{
		j = j + 1;
	}

	for (index = 0; index < j; index = index + 1)
	{
		rev = str[index];
		j = j - 1;
		str[index] = str[j];
		str[j] = rev;
	}
}
