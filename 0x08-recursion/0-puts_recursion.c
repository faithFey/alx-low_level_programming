#include<stdio.h>


/**
 *_puts_recursion - print a string
 *@s:string to be tested
 *Return:returns nothing.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
