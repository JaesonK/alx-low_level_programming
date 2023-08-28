#include "main.h"

/**
 * print_sign - Check Holberton
 * @n: An input number
 * Description: Tohis function prints the sign of the number
 * Return: 1 if number is positive, o if number is 0, or
 * -1 if number is negative
 */
int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		sign = 1;
		print('+');
	}
	else if(n < 0)
	{
		sign = -1;
		print('-');
	}
	else
	{
		sign = 0;
		print('0');
	}
}
