#include "main.h"
#include <stdio.h>

/**
 *_strcpy - function that copies the string pointed to by src
 *@dest: character to be tested.
 *@src:character to be tested.
 *Return:the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
