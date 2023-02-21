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
int c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
