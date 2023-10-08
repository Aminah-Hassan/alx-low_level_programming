#include "main.h"

/**
 * _abs -  computes the absolute value of an integer.
 * N - Our parameter
 * Return: Always void
 */
int _abs(int N)
{
	if (N < 0)
	{
		int abs_val;

		abs_val = N * -1;
		return (abs_val);
	}
	return (N);
}
