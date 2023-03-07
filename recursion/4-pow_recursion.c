#include "main.h"
/**
 * _pow_recursion - a function returns the value of x raised to the power of y.
 * @x: Number Integer
 * @y: Power
 *
 * Return: On (success) .
*/
int _pow_recursion(int x, int y)
{
int rest;
if (y < 0)
{
rest = -1;
}
else if (y == 0)
{
rest = 1;
}
else
{
rest = x * _pow_recursion(x, y - 1);
}
return (rest);
}
