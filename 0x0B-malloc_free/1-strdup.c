#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy to new memory space location.
 * @str: char.
 * Return: 0.
 */

char *_strdup(char *str)
{
	char *iii;
	int index1, index2 = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	index1 = 0;
	while (str[index1] != '\0')
	{
		index1 = index1 + 1;
	}
	iii = malloc(sizeof(char) * (index1 + 1));
	if (iii == NULL)
	{
		return (NULL);
	}
	for (index2 = 0; str[index2]; index2++)
	{
		iii[index2] = str[index2];
	}
	return (iii);
}
