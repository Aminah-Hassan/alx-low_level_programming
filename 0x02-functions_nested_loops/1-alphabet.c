#include "main.h"

/**
 * main - Write a function that prints the alphabet, in lowercase.
 * Followed by a new line.
 * Return: Always 0
 */
int putchar (int character);

void print_alphabet(void)
{
	char C;

	for (C = 'a'; C <= 'z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
}
