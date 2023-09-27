#include "main.h"

/**
 *_strspn -  gets the length of a prefix substring
 *@s:string to be tested.
 *@accept:string to be tested.
 *
 *Return:return 0 on success.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int f = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				f++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (f);
		}
		s++;
	}
	return (f);
}
