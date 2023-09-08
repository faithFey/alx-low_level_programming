#include "main.h"
#include <stdlib.h>

char *_memset(char *a, char b, unsigned int n);
/**
 **_memset - allocate memory with a byte.
 *@a:memory to be occupied.
 *@b:char to a.
 *@n: number of times to copy b
 *
 *Return: pointer to the memory area a.
 */
char *_memset(char *a, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		a[i] = b;
	}
	return (a);
}

/**
 **_calloc - allocates memory for an array nmemb
 *@nmemb:number of elements in the array.
 *@size: size of @element
 *Return:pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
