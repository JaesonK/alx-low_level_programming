#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *
 * main - Entry point
 *
 * Return: 0 Always (Success)
 * */

int main (void)
{
	int i;
	
	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
}
