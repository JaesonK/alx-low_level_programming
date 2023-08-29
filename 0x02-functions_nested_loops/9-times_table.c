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
			if (t <= 9)
			{
				_putchar(t + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				t = t + i;
			}
			else
			{
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				t = t + i;
			}
		}
		_putchar('\n');
	}
}
