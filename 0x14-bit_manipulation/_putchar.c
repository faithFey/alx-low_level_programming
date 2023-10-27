#include "main.h"

/**
 *_putchar - write the character to the stdout
 *@c:character to be printed.
 *Return:0 on sucess.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
