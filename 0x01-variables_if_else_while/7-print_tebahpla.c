#include <stdio.h>

/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	char d;

	for (d = 'z' ; d >= 'a' ; d--)
		putchar(d);
	putchar('\n');
	return (0);
}
