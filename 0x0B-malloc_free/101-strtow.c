#include "main.h"
#include <stdlib.h>

/**
 * count_word - counter the words in a string.
 * @s: string to evaluate.
 * Return: number of words.
 */

int count_word(char *s)
{
	int extract, count, word;

	extract = 0;
	word = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == ' ')
			extract = 0;

		if (extract == 0)
			extract = 1;
			word = word + 1;
	}
	return (word);
}

/**
 * **strtow - splits a string into words.
 * @str: string to split
 * Return: pointer to an array of strings (Success).
 *  or NULL (Error).
 */

char **strtow(char *str)
{
	char **matrix, *temp;

	int i, begin, last, strings, j = 0, length = 0, count = 0;

	while (*(str + length))
		length = length + 1;
	strings = count_word(str);
	if (strings == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (strings + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
			if (count)
			{
				last = i;
				temp = (char *) malloc(sizeof(char) * (count + 1));
				if (temp == NULL)
					return (NULL);
				while (begin < last)
				{
					*temp++ = str[begin++];
				}
				*temp = '\0';
				matrix[j] = temp - count;
				j = j + 1;
				count = 0;
			}
		else if (count++ == 0)
			begin = i;
	}
	matrix[j] = NULL;
	return (matrix);
}
