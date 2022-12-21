#include "main.h"

/**
 * print_array - display number of items in an array.
 * @items: number of items in an array.
 * @list: name of the array.
 * Return: list with items.
 *
 */

void print_array(int *list, int items)
{
	int index;

	for (index = 0; index < (items - 1); index++)
	{
		printf("%d, ", list[index]);
	}

	if ((items - 1) == index)
	{
		printf("%d", list[items - 1]);
	}
	printf("\n");
}
