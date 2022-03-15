#include "main.h"
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
		_putchar(a);
		a++;
	}

	_putchar('\n');

	return (0);
}
