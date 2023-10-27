#include "main.h"

/**
 *_pow - calculates the power of the base
 *@base:base of the interger
 *@power:power of the interger value
 *Return:results
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int results;
	unsigned int i;

	results = 1;
	for (i = 1; i <= power; i++)
		results *= base;
	return (results);
}
/**
 *print_binary - prints the binary representation of a number.
 *@n:input binary
 *Return:void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);

	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
