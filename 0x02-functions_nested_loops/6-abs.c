#include "main.h"

/**
 *_abs - Check Description
 * @n: An integre input
 * Description: This function returns absolute value of a number
 * Return: Absolut value of number n
 */
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
