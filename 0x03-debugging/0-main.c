#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
positive_or_negative(n);
return (0);
}
