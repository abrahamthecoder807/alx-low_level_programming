#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints the number of arguement
 * @argc: An arguement counter
 * @argv: An arguement value
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
