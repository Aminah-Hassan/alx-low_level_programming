/* 5-more_numbers.c */

#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, 10 times.
 */
void more_numbers(void)
{
    int i, j;

    for (i = 0; i < 10; i++) // Loop 10 times
    {
        for (j = 0; j <= 14; j++) // Print numbers from 0 to 14
        {
            if (j > 9) // If the number is two digits, print the first digit
                _putchar(j / 10 + '0');

            _putchar(j % 10 + '0'); // Print the last digit
        }

        _putchar('\n'); // New line after each set of numbers
    }
}

