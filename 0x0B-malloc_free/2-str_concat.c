#include "main.h"
#include <stdlib.h>

/**
 * str_concat - adds two strings together at the end of size.
 * @s1: input one to concatenate.
 * @s2: input two to concatenate.
 * Return: concatenation of s1 and s2.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int index1, index2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	index1 = 0;
	index2 = 0;
	while (s1[index1] != '\0')
	{
		index1 = index1 + 1;
	}
	while (s2[index2] != '\0')
	{
		index2 = index2 + 1;
	}
	concat = malloc(sizeof(char) * (index1 + index2 + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	index1 = index2 = 0;
	while (s1[index1] != '\0')
	{
		concat[index1] = s1[index1];
		index1 = index1 + 1;
	}
	while (s2[index2] != '\0')
	{
		concat[index1] = s2[index2];
		index1 = index1 + 1;
		index2 = index2 + 1;
	}
	concat[index1] = '\0';
	return (concat);
}
