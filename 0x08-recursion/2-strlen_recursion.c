#include <stdio.h>

/**
 *_strlen_recursion -prints the lenth of a string
 *@s:string to be tested.
 *Return:nothing.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
