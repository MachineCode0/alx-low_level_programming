#include "main.h"
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument name
 *
 * Return: result
 */
int main(int argc, char *argv[])
{
	int mul = 0;
	char c[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", c);
		return (1);
	}

		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", mul);

	return (0);
}
