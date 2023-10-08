#include "main.h"

/**
 * a function that prints the last digit of a number.
 * print_last_digit: Prints the last digits of integers.
 * @n: number treated
 * Return: Value of the last digit of number.
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
