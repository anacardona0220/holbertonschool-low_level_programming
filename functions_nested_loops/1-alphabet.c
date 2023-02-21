#include "main.h"
/**
 *print_alphabet - Write a function that prints the alphabet, in lowercase
 *
 *Return: Always 0 (success)
 */
void print_alphabet(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
