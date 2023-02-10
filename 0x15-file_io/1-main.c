#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - creates a file and fills it with text
 * @ac: name of the file to create
 * @av: text to write in the file
 * main - check the code
 * Return: Always 0.
 **/

int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	res = create_file(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}
