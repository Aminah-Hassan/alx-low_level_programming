#include <stdio.h>

/**
 * main - Prints lowercase alphabet except e and q
 * Return: Always (success)
 */

int main(void)
{
	 char C;

	 for (C = 'a'; C <= 'z'; C++)
	 {
		 if ( C != 'e' && C != 'q')
			 putchar(C);
	 }
	 putchar('\n');
	 return (0);
}
