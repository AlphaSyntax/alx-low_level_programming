#include "main.h"

/**
 * _isalpha - Checks if letterc is alphabetic.
 * @letterc: the checked character.
 * Return: 1 if letterc is alphabetic, otherwise 0.
 */

int _isalpha(int letterc)
{
	if ((letterc >= 'a' && letterc <= 'z') || (letterc >= 'A' && letterc <= 'Z'))
		return (1);
	else
		return (0);
}
