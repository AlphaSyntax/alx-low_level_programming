#include "main.h"

/**
 * swap_int - using pointers swaps the values of two integers
 * @num1: integer to swap with num2
 * @num2: integer to swap
 *
 */

void swap_int(int *num1, int *num2)
{
	int var;

	var = *num1;
	*num1 = *num2;
	*num2 = var;

}
