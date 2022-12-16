#include "main.h"

/**
 * _isdigit - determines if num is digit (0 t0 9) or not.
 * @num: evaluated value.
 * Return: 1 if num is digit, otherwise 0.
 */

int _isdigit(int num)
{
	if ((num >= 48) && (num <= 57))
	{
		return (1);
	}
	return (0);
}
