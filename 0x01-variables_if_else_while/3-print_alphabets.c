#include <stdio.h>

/**
 * main - Prints upper case and lower case alphabets
 * Return: Always (success)
 */

int main (void) 
{
   int C;

   for (C = 'a' ; C <= 'z' ; C++)
   {
	   putchar(C);
   }
   for (C = 'A' ; C <= 'Z' ; C++)
   {
      putchar(C);
   }
   putchar('\n');
   return 0;
}
