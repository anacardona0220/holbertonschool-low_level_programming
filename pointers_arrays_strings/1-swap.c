#include "main.h"
/**
* swap_int - a function that swaps the values of two integers
*
* @a: This is number
* @b: This is number
*
*/
void swap_int(int *a, int *b)
{
int aux = *a;
*a = *b;
*b =  aux;
}
