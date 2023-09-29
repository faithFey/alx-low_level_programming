#include "main.h"

/**
 *_isupper - checks whether a letter is uppercase.
 *@c: The number to be checked.
 *Return:1 if c is uppercase or 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
