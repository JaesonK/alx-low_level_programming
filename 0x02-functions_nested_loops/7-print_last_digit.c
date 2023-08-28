#include "main.h"

/**
 * print_last_digit - Check Description
 * @d: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number d
 */
int print_last_digit(int d)
{
	int n;

	if (d < 0)
		n = -1 * d;
	else
		n = d;
	_putchar((n % 10) + '0');

	return (n % 10);
}
