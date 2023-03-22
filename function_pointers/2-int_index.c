#include <stdio.h>
#include "function_pointers.h"
/**
*int_index  - Write a function that searches for an integer
*@array: array
*@size: size
*@cmp:function
* Return: -1 if no elements matches
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array != NULL || size <= 0 || cmp != NULL)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
else
{
return (-1);
}
return (-1);
}
