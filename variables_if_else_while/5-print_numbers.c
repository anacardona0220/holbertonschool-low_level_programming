#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
*main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
int m;
for (m = 0 ; m <= 9 ; m++)
{
putchar(m);
}
putchar('\n');
return (0);
}
