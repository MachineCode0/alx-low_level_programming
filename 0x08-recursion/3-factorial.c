#include "main.h"
/**
 * factorial - a function that returns the factorial of a givien number
 * @n: Number to check
 *
 * Return: -1 if n < 0
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
