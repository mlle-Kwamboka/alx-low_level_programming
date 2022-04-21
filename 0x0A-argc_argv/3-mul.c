#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - multiplies two integers if it receives two arguments
 * @arg: Number of arguments
 * @argv: array of arguments
 *
 * Return:result of multiplication or 1 if number of arguments not two and print error
 */
int main(int argc, char *argv[])
{
	int i;
	int product = 1;

	if (argc > 1 && argc < 3)
	{
		for (i = 1; i < argc; i++)
		{
			product = product * atoi(argv[i]);
			return (product);
		}
	}
	else
		printf("Error");
	return (1);
	return (0);
}
