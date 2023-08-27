#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *leet- to encode a string
 *@s: string to be tested.
 *Return:returns an encoded string.
 */
char *leet(char *s)
{
	/*string to store encoded string */
	char *encoded = (char *)malloc(strlen(s) + 10);
	int encodedIndex = 0;
	int i;

	if (encoded == NULL)
	{
		return NULL;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		char c = s[i];
		int isUppercase = (c >= 'A' && c <= 'Z');

		if (isUppercase)
		{
			c += ('a' - 'A');
		}
		if (c == 'a' || c == 'e' || c == 'o' || c == 't' || c == '1')
		{
			if (c == 'a' || c == 'A')
			{
				encoded[encodedIndex++] = '4';
			}
			else if (c == 'e' || c == 'E')
                        {
                                encoded[encodedIndex++] = '3';
                        }
			else if (c == 'o' || c == 'O')
                        {
                                encoded[encodedIndex++] = '0';
                        }
			else if (c == 't' || c == 'T')
                        {
                                encoded[encodedIndex++] = '7';
                        }
			else if (c == 'l' || c == 'L')
                        {
                                encoded[encodedIndex++] = '1';
                        }
		}
			else
			{
                                encoded[encodedIndex++] = s[i];
                        }
		}
		encoded[encodedIndex] = '\0';
		return encoded;
}
