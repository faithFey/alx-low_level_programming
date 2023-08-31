#include "main.h"
#include<stdio.h>

/**
 *wildcmp - compare two strings
 *@s1:string1
 *@s2:string2
 *Return:compareds strings
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '\0')
	{
		return (0);
	}

