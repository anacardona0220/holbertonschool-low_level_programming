#include "main.h"
#include <stdlib.h>
/**
 **create_array - a function that creates an array of chars.
 *@size: is size array
 *@c: is char
 *Return: NULL if size = 0 . a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
unsigned int k;
char *cad;
cad = malloc(sizeof(char) * size);
if (cad == NULL || size == 0)
{
return (NULL);
}
else
{
for (k = 0; k < size; k++)
{
cad[k] = c;
}
return (cad);
}
}
