#include "main.h"

/**
 * _abs -  computes the absolute value of an integer.
 * @N - the parameter assigned to the int function.
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
