#include <stdio.h>
/**
* print_alphabet - Prints alphabets
* Description: a function to print all lowercase alphabets
*
* Return: Always 0
*/
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
