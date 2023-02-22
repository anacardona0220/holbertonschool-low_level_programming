#include "main.h"
/**
* print_last_digit - a function that prints the last digit of a number
* @n: single number input
* Return: digit
*/
int print_last_digit(int n)
{
int dig;
dig = n % 10;
if (dig < 0)
dig = dig * -1;
_putchar(dig + '0');
return (dig);
}
