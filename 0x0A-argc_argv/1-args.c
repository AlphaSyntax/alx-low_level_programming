#include <stdio.h>
#include "main.h"

/**
 * main - outputs n0. of arguments passed to the program.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	retunr (0);
}