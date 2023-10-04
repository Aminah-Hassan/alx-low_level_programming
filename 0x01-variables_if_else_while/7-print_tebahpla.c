#include <stdio.h>

/**
 * main - Prints lowercase reversed  alphabets
 * Return: Always (success)
 */

int main(void)
{
	char C;

	for (C = 'z'; C >= 'a'; C--)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
