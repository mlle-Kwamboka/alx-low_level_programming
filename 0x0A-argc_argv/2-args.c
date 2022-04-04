#include "main.h"
#include <stdio.h>

/**
 * main - prints all argument it receives
 *
 * @argc: Number of arguments
 * @argv: array of arguments
 *
 * Return: Alway 0 (success)
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
