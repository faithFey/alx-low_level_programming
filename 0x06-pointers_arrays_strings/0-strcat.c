#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strcat - function that concatenates two strings
 *@dest:will append the contents of 'src' to the end of 'dest'.
 *@src:pointer to the source string that you want to append to 'desr' string.
 * Return:returns the first character.
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (ptr);
}
