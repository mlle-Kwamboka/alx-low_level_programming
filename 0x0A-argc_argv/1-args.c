#include <stdio.h>
#include "main.h"
/**
 * main - prints number of args passed
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}

