#include <stdio.h>

/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	int i;
	char C;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (C = 'a' ; C <= 'f' ; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
