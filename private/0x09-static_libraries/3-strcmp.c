#include "main.h"

/**
 *_strcmp - compare two strings
 *@s1:the first string to be compared
 *@s2:the second string to be compared.
 *Return:returns 0 on success.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
