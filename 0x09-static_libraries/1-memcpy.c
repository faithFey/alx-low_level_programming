#include "main.h"

/**
 *_memcpy -copies n bytes from memory area src to memory area dest
 *@dest:string to be tested.
 *@src:string to be tested.
 *@n:string to be tested.
 *Return:pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int i = n;

	for (r = 0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
