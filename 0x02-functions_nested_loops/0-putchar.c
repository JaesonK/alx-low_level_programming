#include "main.h"

/*
 * main - Entry point
 *Description: It prints the word Holberton, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char word[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		putchar(word[i]);
	putchar('\n');

	return (0);
}
