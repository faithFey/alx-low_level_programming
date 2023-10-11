#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - print name using pointer to pointer
 *@name:string for the add.
 *@f:pointer to function
 *
 *Return:void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
