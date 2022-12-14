#include "main.h"

/**
 * _abs - determines interger's absolute value.
 * @num: interger number to be inspected.
 * Return: the absolute value of a given integer.
 */

int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	return (-num);
}
