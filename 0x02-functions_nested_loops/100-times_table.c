#include "main.h"

/**
 * print_times_table - prints times table for numbers from 0-14
 * @n: An input integer value
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, j, k;
	
	if (n > 0 && n <= 15)
	{
		for (i =  0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				printf("%d", k);
				if (j != n)
				{
					if (k <= 9)
						printf(",   ");
					else if (k > 9 && k <= 99)
						printf(",  ");
					else
						printf(", ");
				}
			}
		}
	}
}
