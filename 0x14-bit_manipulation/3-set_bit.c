#include "main.h"
/**
 * set_bit - sets a bit at the index
 * @n: pointer to the number to index
 * @index: * the bit to set
 *
 * Return: 1 for success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
{
return (-1);
}
*n |= 1UL << index;
return (1);
}
