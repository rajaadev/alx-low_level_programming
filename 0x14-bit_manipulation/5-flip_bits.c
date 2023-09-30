#include "main.h"
/**
 * flip_bits - t returns the number of bits you would need to flip
* to get from one number to another
 * @number_f: first number
 * @number_s: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int number_f, unsigned long int number_s)
{
unsigned long int xor_result = number_f ^ number_s;
unsigned int count = 0;

while (xor_result > 0)
{
count += xor_result & 1;
xor_result >>= 1;
}
return (count);
}
