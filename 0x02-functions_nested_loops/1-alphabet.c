#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - a program that prints alphabets in lowercase
 * @alpha - alphabet to check
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
