#include "main.h"
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int _sqrt(int n, int i);
/**
 *_sqrt_recursion - prints the squareroot
 *@n:number to be tested.
 *
 *Return:returns the squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 *_sqrt - calculate the square root
 *@n:number to be tested.
 *@i:counter
 *Return:returns the sqrt.
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt --)
	{
		return (i);
	}
	return(_sqrt(n, i + 1));
}
