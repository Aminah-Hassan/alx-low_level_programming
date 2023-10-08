#include "main.h"
#include <stdio.h>

/**
 * main - Write a function that print_alphabet, in lowercase.
 * prints 'c'
 * Followed by a new line.
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
