#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *create_array - creates an array of chars
 *@size:size of the array
 *@c:character
 *
 *Return:an array
 */
char *create_array(unsigned int size, char c)
{
	char *f;
	unsigned int i;

	f = malloc(size * sizeof(char));
	if (size == 0 || f == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	f[i] = c;
	return (f);
	}

