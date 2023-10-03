#include "main.h"
#include<stdlib.h>

/**
 *argstostr- concatenates all the arguments of your program.
 *@ac:argument.
 *@av:pointer to a new string.
 *
 *Return:concatenated arguments.
 */
char *argstostr(int ac, char **av)
{
	int i, j, a = 0, b = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			b++;
	}
	b += ac;

	str = malloc(sizeof(char) * b + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		str[a] = av[i][j];
		a++;
	}
	if (str[a] == '\0')
	{
		str[a++] = '\n';
	}
	}
	return (str);
}
