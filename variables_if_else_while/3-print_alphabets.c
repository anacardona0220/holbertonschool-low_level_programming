#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
*main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
int c, m;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (m = 'A' ; m <= 'Z'; m++)
{
putchar(m);
}
putchar('\n');
return (0);
}
