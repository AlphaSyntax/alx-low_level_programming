#include <unistd.h> 

/**
 * _puchar = writes the characer letter to screen.
 * @letter: The character to print.
 * Return: Success 1.
 * -1 returned on error and errno is set accordingly.
 */

int _putchar(char letter)
{
	return(write(1, &c));
}
