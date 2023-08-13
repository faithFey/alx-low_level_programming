#include<stdlib.h>
#include<stdio.h>

/**
 *main -  program that prints the alphabet in lowercase, and then in uppercase.
 *Return: returns 0 on success.
 */
int main(void)
{
	int a = 97;
	int b = 65;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
