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
			t = t + i;
			_putchar(t);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
