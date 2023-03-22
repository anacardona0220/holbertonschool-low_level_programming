#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - function that prints a name
 *@d: struct
 *@name: name  char *
 *@f: function
 * Return: My name is Poppy, and I am 3.5 :) - Woof!
 */
void print_name(char *name, void (*f)(char *))
{
if( f != NULL)
{
(*f)(name);
}
}
