#include<stdlib.h>
#include<stdio.h>

/**
 *main -program that prints all possible combinations of single-digit numbers.
 *Return: return(0) on success.
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
