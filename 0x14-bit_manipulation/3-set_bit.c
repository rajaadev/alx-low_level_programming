#include "main.h"
/**
 * set_bit - sets a bit at the index
 * @n: pointer to the number to index
 * @index: * the bit to set 
 *
 * Return: 1 for success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index) {
if (index >= sizeof(unsigned long int) *8)
{
return -1; // Index out of range
}

unsigned long int mask = 1UL << index;
*n |= mask;

return 1; // Bit set successfully
}
