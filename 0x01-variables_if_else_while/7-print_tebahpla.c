#include <stdio.h>

/**
 * main - Prints lowercase reversed  alphabets
 * Return: Always (success)
 */

int main(void)
{
        int c;

        for (c = 'z'; c >= 'a'; c--)
        {
                putchar(c);
        }
        putchar('\n');
        return (0);
}
