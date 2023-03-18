#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: number of arguement
 * @argv: arguement
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int num1;
	int num2;
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
}
