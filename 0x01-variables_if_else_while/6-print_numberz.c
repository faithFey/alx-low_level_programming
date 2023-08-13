#include<stdlib.h>
#include<stdio.h>

/**
 *main -program that prints all single digit numbers of base 10 starting from 0
 *Return: return 0 on success.
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
