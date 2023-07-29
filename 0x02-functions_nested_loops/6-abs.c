#include <stdio.h>
#include "main.h"
/**
 * _abs - a function that computes the abosolute value of an int
 * @n: integer to check
 *
 * Return: int result
 */

int _abs(int n)
{
	int result = n * (-1);

	if (n >= 0)
		return (n);

	else
		return (result);

}
