#include "main.h"

/**
 *set_bit - sets the value of a bit to 1 at a given index.
 *@n:number to be set.
 *@index:location for the bit to be set.
 *Return:1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitToBeSet;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bitToBeSet = 1 << index;
	*n = *n | bitToBeSet;
	return (1);
}
