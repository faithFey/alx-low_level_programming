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
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
