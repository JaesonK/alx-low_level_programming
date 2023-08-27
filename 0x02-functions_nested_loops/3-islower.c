#include "main.h"

/**
 * _islower - Check descriptio
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	int ac = (int) c;

	if (ac >= 97 && ac <= 122)
		return (1);
	else 
		return (0);
}
