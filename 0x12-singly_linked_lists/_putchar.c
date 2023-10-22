#include "lists.h"

/**
 *_putchar -puts character
 *Return:return 0 on success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
