#include "main.h"
#include <string.h>

/**
 *_strncat -function that concatenates two strings.
 *@dest:destination string.
 *@src:the source string.
 *@n:maximum number of strings to concatenate.
 *Return:return concanated strings.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	for (i = 0; i < n && *src != '\0'; i++)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (ptr);
}
