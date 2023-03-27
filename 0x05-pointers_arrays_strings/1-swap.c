#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: input
 * @b: input
 * return : n
*/
void swap_int(int *a, int *b)
{
int tampon;
tampon = *a;
*a = *b;
*b = tampon;
}
