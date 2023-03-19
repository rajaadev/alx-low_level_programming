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
	int  num = 0;
	/* print single digit numbers */
	while (num < 10)
	{
	putchar (num + '0');
	num++;
	}
	putchar ('\n');
	return (0);
}
