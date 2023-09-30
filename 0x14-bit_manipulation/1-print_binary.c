#include "main.h"

/**
 * print_binary - convert decimal number to binary and print it.
 * @number: number to print in binary
 */

void print_binary(unsigned long int number)
{
int i;
int count = 0;
unsigned long int current_number;

for (i = 63 ; i >= 0; i--)
{
current_number =  number >> i;

if (current_number & 1)
{
_putchar('1');
count++;
}
else if (count)

_putchar('0');
}
if (!count)
_putchar('0');

}
