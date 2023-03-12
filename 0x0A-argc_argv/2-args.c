#include <stdio.h>
#include "main.h"

/**
 * main - A program that printd all arguement it receives
 * @argc: arguement count
 * @argv: arguement value
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
