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
				_putchar('0' + t);
				if (j != 9 && (t + i) <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				t = t + i;
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
				t = t + i;
			}
		}
		_putchar('\n');
	}
}
