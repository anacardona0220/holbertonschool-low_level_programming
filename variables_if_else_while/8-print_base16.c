#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>
/**
*main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
int c, l;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
for (l = 'a'; l <= 'f'; l++)
{
putchar(l);
}
putchar('\n');
return (0);
}
