#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: digit
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int result;

	result = n % 10;

	if (n < 0)
	{
		result = result * (-1);
	}

	_putchar(result + '0');

	return (result);
}
