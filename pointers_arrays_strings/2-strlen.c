#include "main.h"
/**
* _strlen -  function that returns the length of a string
*
* @s: This is char
*Return: returns the length of a string
*/
int _strlen(char *s)
{
int k;
int longitud = 0;
for (k = 0; s[k] != '\0'; k++)
{
longitud++;
}
return (longitud);
}
