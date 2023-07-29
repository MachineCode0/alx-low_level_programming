#include <stdio.h>
#include "main.h"
/**
 * _islower - a function that checks for lowercase characters
 * @c: character to check
 *
 * Return: 1 if c is lowercase else return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
