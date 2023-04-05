#include "main.h"
/**
 * factorial - function that return factoriel number
 * @n: number
 * Return: factoriel n.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
else
{
return (n * factorial(n - 1));
}
}
