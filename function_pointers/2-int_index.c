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
if (array == NULL || cmp == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
