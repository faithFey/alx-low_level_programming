#include <unistd.h>

/**
 *_putchar- outputs the character on std out.
 *@c:input string
 *Return:returns character on std out.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
