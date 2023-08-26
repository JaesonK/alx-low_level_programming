#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * return: 0 Alaways (Success)
 */

int main(void)
{
	int i;
	
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(", ");
	}

	return (0);
}

