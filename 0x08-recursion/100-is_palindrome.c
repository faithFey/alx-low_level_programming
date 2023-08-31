#include<stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

int paliChecker(char *s, int startOfString, int endOfString);
/**
 *is_palindrome -a string that can be read from both sides
 *@s:string
 *Return:return 0 or 1
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (paliChecker(s, 0, len - 1));
}
/**
 *paliChecker - a string that be read on bothsided
 *@s:string;
 *@startOfString:start of string
 *@endOfString:end og the sting
 *Return:returns 1 or.
 */
int paliChecker(char *s, int startOfString, int endOfString)
{
/*empty string or single character is a parindrome */
	if (startOfString >= endOfString)
	{
		return (1);
	}
	if (s[startOfString] != s[endOfString])
	{
		return (0);
	}
	return (paliChecker(s, startOfString  + 1, endOfString  - 1));
}
