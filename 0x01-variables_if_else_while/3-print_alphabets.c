#include <stdio.h>

/**
 * main - function to print alphabets in upper and lowercase
 *
 * Return: String of alphabets in upper and lower case
 */
int main(void)
{
	char l = 'a';
	char u = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');

	return (0);
}
