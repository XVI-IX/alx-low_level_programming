#include <stdio.h>
/**
* print_alphabet_x10 - print 10 lines of alphabets
*
* Description: Prints 10 lines of all lowercase alphabets,
* followed by a new line.
*
* Return: always 0
*/

void print_alphabet_x10(void)
{
	char a = 'a';
	int i = 0;

	for (; i < 10; )
	{
		while (a <= 'z')
		{
			putchar(a);
			a++;
		}
		putchar('\n');

		a = 'a';

		i++;
	}
}
