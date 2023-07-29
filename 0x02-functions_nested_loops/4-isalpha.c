#include <stdio.h>
#include "main.h"
/**
 * _isalpha - a function that checks for uppercase character
 * @c: letter to check
 *
 * Return: 1 if letter is upper or lowercase 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
