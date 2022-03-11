#include <stdio.h>

/**
 * main -  funcction to print lowercase alphabets except q and e
 *
 * Return: String of alphabets except q and e
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
