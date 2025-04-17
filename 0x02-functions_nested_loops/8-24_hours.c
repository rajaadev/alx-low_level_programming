#include "main.h"

/**
 * jack_bauer - prints every minute of the dayof jack Bauer,
 * starting from 00:00 to 23: 59
 * @h: number of hours
 * @m: number of minutes
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		m = 0;

		for (m = 0; m <= 59; m++)
		{
		if (h / 10 == 0)
			printf("0");
		printf("%d",h );
		printf(":");
		if (m / 10 == 0)
			printf("0");
		printf("%d",m);
		printf("\n");
		}

	}
}
