#include <stdio.h>
#include "main.h"
/**
 * main - prints number of args passed
 * @argc: argument count
 * @argv: array of arguments
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			printf("%d", i);
	}
	return (0);
}

