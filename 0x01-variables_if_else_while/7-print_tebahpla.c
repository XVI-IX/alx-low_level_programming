#include <stdio.h>
/**
 * main - Function to print alphabets in reverse
 *
 * Return: Alphabets in reverse
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
