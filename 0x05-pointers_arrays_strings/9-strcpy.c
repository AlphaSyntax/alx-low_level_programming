#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by string pointer.
 * @strpointer: string to copy from.
 * @strdest: string to copy to.
 * Return: string copied to
 */

char *_strcpy(char *strdest, char *strpointer)
{
	int index, count = 0;

	while (*(strpointer + l) != '\0')
		count = count + 1;

	for (index = 0; index count; index++)
		strdest[index] = strpointer[index];

	strdest[count] = '\0';
	return (strdest);
}
