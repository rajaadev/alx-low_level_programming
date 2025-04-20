#include <stdio.h>

/**
 *
 *
 *
 */
int main(void)
{
int i = 0;
int s = 0;

while(s < 1024)
	{
	i++;
	if (i / 3 == 0 || i / 5 == 0)
	{
		s = s+i;
		printf("%d ,",s);
	}
	}
return 0;
}
