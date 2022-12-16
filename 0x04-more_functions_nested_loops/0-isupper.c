#include "main.h"

/**
 *_isupper - determine whether letter is uppercase or not.
 * @letter: character to be examined.
 *
 *Return: 1 if letter is uppercases, otherwise 0.
 */

int _isupper(int letter)
{
	if ((letter >= 'A') && (letter <= 'Z'))
	{
		return (1);
	}
	return (0);
}
