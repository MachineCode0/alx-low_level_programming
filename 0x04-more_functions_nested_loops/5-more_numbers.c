#include "main.h"
/**
 * more_numbers - a function that prints ten times the numbers
 *			from 0-14, followed by a new line.
 */

void more_numbers(void)
{
	int space = 0, num;

	while (space < 10)
	{
		num = 0;

		while (num <= 14)
		{
			if (num > 9)
				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
			num++;
		}

		_putchar('\n');
		space++;
	}
}
