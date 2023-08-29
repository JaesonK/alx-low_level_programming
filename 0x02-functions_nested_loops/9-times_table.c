#include "main.h"

/**
 * times_table - Check description
 * Description: It prints 9 times table starting with 0
 * Return: Nothing.
 */
void times_table(void)
{
	int i, j, t;

	for (i = 0; i <= 9; i++)
	{
		t = 0;
		for (j = 0; j <= 9; j++)
		{
			_putchar((t) + '0');
			_putchar(',');
			_putchar(' ');
			t = t + i;
		}
		_putchar('\n');
	}
}
