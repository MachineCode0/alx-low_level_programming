#include <stdio.h>

/**
 * main - print alphabets in lowercase except q and e
 *
 * Return: Always (0) success
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e' || alpha == 'q')
			continue;

		putchar(alpha);
	}

	putchar('\n');

	return (0);

}
