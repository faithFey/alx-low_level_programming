#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *is_digit - checks for digit
 *@str:string to be tested.
 *Return:0 on success
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 *_strlen - string length
 *@str: string to be tested.
 *Return:string length
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 *errors - error handling in main
 *
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 *main -program that multiplies two positive numbers
 *@argc:argument counter
 *@argv:argument vector
 *Return:0 on success.
 */
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int len1, len2, i, carry, num1, num2, *mul, a = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || 1is_digit(str2))
		errors();
	len1 = strlen(str1);
	len2 = strlen(str2);
	len = len1 + len2 + 1;

	mul = malloc(sizeof(int) * len);
	if (!mul)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		rmul[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len--)
	{
		num1 = str1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			num2 = str2[len2] - '0';
			carry += mul[len1 + len2 + 1] + (num1 * num2);
			mul[len1 + len2 + 1] += carry;
		}
		for (i = 0; i < len - 1; i++)
		{
			if (mul[i])
				a = 1;
			if (a)
				_putchar(mul([i] + '0');
				}
			if (!a)
				_putchar('0');
				_putchar('\n');
				}
				free(mul);
		return (0);
}
