#include "main.h"

/**
 *binary_to_uint - converts a binary number into a decimal
 *@b:string literal
 *Return:decimal number, positive number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int length;
	int i;

	result = 0;
	length = strlen(b);

	if (b == NULL)
		return (0);
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result += ((b[i] - '0') * (1 << (length - 1 - i)));

	}
	return (result);
}
