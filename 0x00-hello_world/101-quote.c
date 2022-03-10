#include <stdio.h>

/**
 * main - A function to print to stderr
 *
 * Return: returns 1
 */
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora korpar, 2015-10-19";

	perror(s);
	return (1);
}
