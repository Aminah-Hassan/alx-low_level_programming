#include <stdio.h>

/**
 * main - Prints Lowercase letters except e & q
 * Return: Always (success)
 */

int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)

	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
