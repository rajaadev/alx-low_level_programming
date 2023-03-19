#include <stdio.h>
/**
 * main - Entry point of the program
 * This function is the entry point
 * of the program and is responsible for
 * starting the execution of the program.
 * It initializes any necessary resources
 * and then calls other functions as needed.
 * Return: 0 on success, non-zero on failure
 */
int main(void)
{
	int i, j, k;

	for (i = 0 ; i < 8 ; i++)
	{
	for (j = i + 1 ; j < 9 ; j++)
	{
	for (k = j + 1 ; k < 10 ; k++)
	{
	putchar (i + 48);
	putchar (j + 48);
	putchar (k + 48);
	if (i == 7 && j == 8 && k == 9)
	{
	}
	else
	{
	putchar (',');
	putchar (32);
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
