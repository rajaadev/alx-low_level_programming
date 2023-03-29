#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random
 * password for 101-crackme
 * Return: 0
 */

int main(void)
{
int i, n;
int sum = 0;
int pass[100];

srand(time(NULL));

for (i = 0; i < 100; i++)
{
pass[i] = rand() % 78;
sum += (pass[i] + '0');
putchar(pass[i] + '0');
if (2772 - sum - '0' < 78)
{
n = 2772 - sum - '0';
sum += n;
putchar(n + '0');
break;
}
}
return (0);
}
