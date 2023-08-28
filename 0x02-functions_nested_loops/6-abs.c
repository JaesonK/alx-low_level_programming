#include "main.h"

/**
 *_abs - Check Holberton
 * @r: An integre input
 * Description: This function returns absolute value of a number
 * Return: Absolut value of number r
 */
int _abs(int n)
{
	int r;
	
	if (n < 0)
		r = -1 * n;
	else
		r = n;

	return (r);
}
