#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator -  executes a function given as a parameter
 *@array: array
 *@action: function
 *@size: size
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
