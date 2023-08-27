#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		putchar(word[i]);
	putchar('\n');

	return (0);
}
