#include <stdlib.h>
#include "main.h"
/**
 * argstostr - main entry.
 * @ac: integer input.
 * @av: double pointer array.
 * Return: 0.
 */

char *argstostr(int ac, char **av)
{
	int index1, index2, counter1 = 0, counter2 = 0;
	char *string;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (index1 = 0; index1 < ac; index1++)
	{
		for (index2 = 0; av[index1][index2]; index2++)
		{
			counter2 = counter2 + 1;
		}
	}
	counter2 = counter2 + ac;
	string = malloc(sizeof(char) * counter2 + 1);
	if (string == NULL)
	{
		return (NULL);
	}
	for (index1 = 0; index1 < ac; index1++)
	{
		for (index2; av[index1][index2]; index2++)
		{
			string[index1] = av[index1][index2];
			counter1 = counter1 + 1;
		}
		if (string[counter1] == '\0')
		{
			string[counter1++] = '\n';
		}
	}
	return (string);
}
