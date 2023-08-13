#include<stdlib.h>
#include<stdio.h>

/**
 *main - program that prints the lowercase alphabet in reverse.
 *Return:return(0) on success.
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
