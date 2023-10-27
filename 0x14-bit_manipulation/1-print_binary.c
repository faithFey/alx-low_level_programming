#include "main.h"

/**
 *print_binary - prints the binary representation of a number.
 *@n:input binary
 *Return:void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int a = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int leadingZeros = 1;

	while (a > 0)
	{
		if (n & a)
		{
			printf("1");
			leadingZeros = 0;
		
		}
		else if (!leadingZeros)
		{
			printf("0");
		}
			a >>= 1;
	}
	if (leadingZeros)
	{
		printf("0");
	}
	printf("\n");
}	
