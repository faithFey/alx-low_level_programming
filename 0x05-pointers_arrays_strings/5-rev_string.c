#include "main.h"
#include <string.h>

/**
 *rev_string - reverse the input string
 *@s:the input to be teste.
 *Return: there is no return 0.
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i, j;
	char temp;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
