#include "function_pointers.h"
#include <stdio.h>

/**
 *array_iterator-gives  parameter of each element of an array
 *@array:array of elements
 *@size:the size of an array
 *@action:pointer to print you need to use.
 *Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
