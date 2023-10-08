#include "main.h"

/**
 * print_alphabet(void) - entry point
 * Description: This function prints the alphabet, in lowercase
 * Return: Always 0
 */

void print_alphabet(void)
{
	char C;

	for (C = 'a'; C <= 'z'; C++)
	{
		_putchar(C);
	}
	_putchar('\n');
}
