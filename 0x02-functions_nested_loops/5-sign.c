#include <stdio.h>
#include "main.h"
/**
 * print_sign - a function that prints the sign of a number.
 * @n: number to check
 *
 * Return: + if number is greater than 0, - if number is
 *		less than 0, 0 if number is 0
 */

int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
