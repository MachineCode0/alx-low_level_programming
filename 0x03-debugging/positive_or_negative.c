#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * positive_or_negative - a c program that checks if number is positive
 * @i: integer to check
 */

void positive_or_negative(int i)
{
		if (i > 0)
		{
			printf("%d is positive\n", i);
		}

		else if (i < 0)
		{
			printf("%d is negative\n", i);
		}

		else
		{
			printf("%d is zero\n", i);
		}
}
