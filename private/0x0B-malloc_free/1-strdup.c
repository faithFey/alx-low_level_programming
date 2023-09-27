#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - duplicate string
 *@str: string
 *
 *Return:o 0n success.
 *Description:program to duplicate a string.
 */
char *_strdup(char *str)
{
	char *f;
	int i, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
		i++;
	f = malloc(sizeof(char) * (i + 1));

	if (f == NULL)
	return (NULL);

	for (j = 0; str[j]; j++)
	f[j] = str[j];

	return (f);
}
