#include "main.h"

/**
 * _islower - inspect if letter is lowercase.
 * @letter: the letter to be inspected
 * Return: 1 if letter is lowercase, otherwise 0.
 */

int _islower(int letter)
{
	if (letter >= 'a' && letter <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
