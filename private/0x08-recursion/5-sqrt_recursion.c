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
	/*checks that the number is a natural number.if not return -1 */
	if (n < 0)
		return (-1);
	/*i dont understand the function of the 0. */
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
	/*if the number is a perfect square(ixi) return i */
	if (sqrt == n)
	{
		return (i);
	}
	/*return the square root and the call the next number to be executed */
	return (_sqrt(n, i + 1));
}
