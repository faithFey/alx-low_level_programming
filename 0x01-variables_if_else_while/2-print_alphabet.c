#include<stdlib.h>
#include<stdio.h>

/**
 *main -program that prints the alphabet in lowercase
 *
 *Return:returns zero on success.
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
