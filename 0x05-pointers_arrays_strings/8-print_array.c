#include "main.h"
#include <stdio.h>

/**
 *print_array - prints n elements of an array of integers,on a new line.
 *@a:The first array pointer value.
 *@n:The second array value
 *Return:no return
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
