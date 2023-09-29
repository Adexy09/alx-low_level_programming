#include "main.h"

/**
 * factorial - returns the factorial of any number
 * @n: number to which we return the factorial from
 *
 * Return: return factorial of n to mark success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

