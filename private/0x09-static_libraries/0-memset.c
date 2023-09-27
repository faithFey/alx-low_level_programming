#include "main.h"

/**
 *_memset - function that fills memory with a constant byte
 *@s:input to be tested
 *@b:input to be tested.
 *@n:input to be tested.
 *Return:returns a string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
