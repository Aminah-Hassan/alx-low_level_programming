#include "main.h"

/**
 * print_alphabet(void) - entry point
 * Description: This function prints the alphabet, in lowercase
 * Return: Always 0
 */
int  putchar (int C);
void print_alphabet(void)
{
	char C;

	for (C = 'a'; C <= 'z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
}
