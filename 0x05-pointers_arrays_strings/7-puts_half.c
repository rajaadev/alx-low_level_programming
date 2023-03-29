#include "main.h"

/**
 * puts_half - a function that  prints half of a string
 * followed by a new line.
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
int i, n, longi;
longi = 0;

for (i = 0; str[i] != '\0'; i++)
longi++;
n = (longi / 2);
if ((longi % 2) == 1)
n = ((longi + 1) / 2);
for (i = n; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
