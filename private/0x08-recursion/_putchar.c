#include <unistd.h>

/**
 *_putchar -outputs the characters on standard output.
 *@c:the string to be tested
 *
 *Return:returns the character on the stdout.
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
