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
for (c = 0; c <= 9; c++)
{
putchar(c + '0');
if (c == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
