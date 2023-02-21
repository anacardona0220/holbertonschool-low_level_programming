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
int c;
for (c = 0; c < 10; c++)
{
putchar((c % 10) + '0');
}
putchar('\n');
return (0);
}
