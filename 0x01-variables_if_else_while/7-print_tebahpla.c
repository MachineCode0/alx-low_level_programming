#include <stdio.h>

/**
 * main - print lowercase alphabets in reverse order
 *
 * Return: Always 0 Success
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);

	}
	putchar('\n');

	return (0);

}
