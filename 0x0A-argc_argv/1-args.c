#include "main.h"
/**
 * main - a program that prints the number of arguments passed to it.
 * @argc: argument count.
 * @argv: argument name.
 *
 * Return: number of arguments passed.
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
