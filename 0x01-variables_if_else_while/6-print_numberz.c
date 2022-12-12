#include <stdio.h>

/**
 * main - Using putchar, dispalys single digit numbers with base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	putchar("\n");
	return (0);
}
