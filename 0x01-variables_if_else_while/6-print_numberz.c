#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 * followed by a new line
 * Return: ALways (success)
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
