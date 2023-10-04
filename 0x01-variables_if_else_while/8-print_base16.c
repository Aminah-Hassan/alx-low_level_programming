#include <stdio.h>

/**
 * main - Prints numbers of base 16 in lowercase, followed by a new line.
 * Return: Always (success)
 */

int main(void)
{
	int num;
	char C;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (C = 'a'; C <= 'f'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
