#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - a function to print alphabet 10x
 * @a - alphabet to check
 * @b - alphabet to check
 */

void print_alphabet_x10(void)
{
	int spaces = 0, alpha;

	while (spaces < 10)
	{
		alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}

		_putchar('\n');
		spaces++;
	}



}
