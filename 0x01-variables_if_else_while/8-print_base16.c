#include <stdio.h>
/**
 * main - function to print hexadecimals
 *
 * Return: Hexadecimal digits
 */
int main(void)
{
	int i = 0;
	char c = 'a';

	for ( ; i <= 9; )
	{
		putchar(i + '0');
		i++;
	}
	while (c <= "f")
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
