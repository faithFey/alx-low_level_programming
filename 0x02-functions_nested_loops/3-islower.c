#include "main.h"

/**
 *islower - check for lowercase characters.
 *Return: 1 for lower character or 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <=122)
	{
		return (1);
	}
	return (0);
}
