#include<stdlib.h>
#include<stdio.h>
#include<time.h>

/**
 *main- A program that assign a number if its postive,zero or negative
 *
 *Return: returns 0 when successful.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (n);
}
