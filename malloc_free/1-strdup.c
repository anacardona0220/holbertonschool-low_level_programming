#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
*/
char *_strdup(char *str)
{
char *newCadena;
int i, r = 0;
int size = strlen(str);
printf("el numero de caracteres es %d\n", size);
if (str == NULL)
return (NULL);
while (str[i] < size)
i++;
newCadena = malloc(sizeof(char) * (i + 1));
if (newCadena == NULL)
return (NULL);
for (r = 0; str[r]; r++)
newCadena[r] = str[r];
return (newCadena);
}
