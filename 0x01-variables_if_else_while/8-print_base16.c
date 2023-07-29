#include <stdio.h>

/**
 * main - a program that prints all number of base 16 in lowercase
 *
 * Return: Always 0 success
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num % 10 + '0');
	}

	for (num = 97; num <= 102; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);

}
