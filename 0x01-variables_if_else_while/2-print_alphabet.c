#include <stdio.h>

/**
 * main - function function to print alphabets
 *
 * Return: String of alphabets
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
