#include "main.h"
/**
 * main - a program that prints all arguments it receives.
 * @argc: argument count
 * @argv: argument name
 *
 * Return: all arguments received.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
