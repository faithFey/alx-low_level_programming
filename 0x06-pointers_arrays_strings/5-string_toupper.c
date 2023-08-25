#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <ctype.h>

/**
 *string_toupper - changes all the lower case characters to uppercas.
 *@str:string to be tested.
 *Return:return uppercase.
 */

char *string_toupper(char *str)
{
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	 ptr = str;
	while (*ptr != '\0')
	{
		if (islower(*ptr))
		{
			*ptr = toupper(*ptr);
		}
		ptr++;
	}
	return (str);
}
