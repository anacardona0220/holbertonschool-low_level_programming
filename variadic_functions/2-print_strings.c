#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_strings - function that prints strings, followed by a new line
*@cadena:  char *
*@n: int
*@separator: char
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *cadena;
va_list parametros;
va_start(parametros, n);
for (i = 0; i < n; i++)
{
cadena = va_arg(parametros, char *);
if (cadena == NULL)
{
printf("(nil)");
}
else
{
printf("%s", cadena);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(parametros);
}
