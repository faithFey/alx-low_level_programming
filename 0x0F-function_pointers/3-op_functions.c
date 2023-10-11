#include "3-calc.h"
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *op_add -returns sum of two numbers
 *@a:first number
 *@b:second number
 *Return:sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub -returns diff of two numbers
 *@a:first number
 *@b:second number
 *Return:diff of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul -returns mul of two numbers
 *@a:first number
 *@b:second number
 *Return:mul of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div -returns div of two numbers
 *@a:first number
 *@b:second number
 *Return:mod of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod -returns mod of two numbers
 *@a:first number
 *@b:second number
 *Return:mod of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
