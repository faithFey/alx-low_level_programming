#include "main.h"

/**
 *_strlen - used to count the number of characters in a string
 *@s:The pointer to be tested.
 *Return:return 0 on success.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
