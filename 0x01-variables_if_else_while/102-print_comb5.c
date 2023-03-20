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
	int i, j;

	for (i = 0; i < 99; i++)
	{
	for (j = i + 1 ; j < 100; j++)
	{
	int ffd = i / 10;
	int fsd = i % 10;
	int sfd = j / 10;
	int ssd = j % 10;

	putchar(ffd + 48);
	putchar(fsd  + 48);
	putchar(' ');
	putchar(sfd  + 48);
	putchar(ssd + 48);

	if (i == 98 && j == 99)
	{
	}
	else
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
