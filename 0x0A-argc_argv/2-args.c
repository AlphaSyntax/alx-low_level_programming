#include <stdio.h>
#include "main.h"
/**
 *  main - outputs all arguments passed into the program.
 *  @argc: number of arguments.
 *  @argv: array of arguments.
 *  Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
