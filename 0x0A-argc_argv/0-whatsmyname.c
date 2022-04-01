#include <stdio.h>

/**
 * main - Prints itself
 *
 * @
 * Return: The name of the program
 */
int main(int argc, char *argv)
{
	int i;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
			putchar (argv[0]);
	}
	return (0);
}
