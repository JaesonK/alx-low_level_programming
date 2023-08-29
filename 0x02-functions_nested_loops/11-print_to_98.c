#include "main.h"

/**
 * print_to_98 - Check Description
 * @n: A input integer
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line.
 * Return: Nothing
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i >= -9 && i <= 9)
			{
				if (i < 0)
				{
					_putchar('-');
					_putchar((-1 * i));
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(i + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (i < -9)
			{
				_putchar('-');
				_putchar(((-1 * i) / 10) + '0');
				_putchar(((-1 * i) % 10) + '0');
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
