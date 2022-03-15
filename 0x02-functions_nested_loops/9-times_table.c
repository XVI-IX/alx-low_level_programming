#include <stdio.h>
/**
 * times_table - Function to print 9 times table in terminal
 *
 * Return: Always 0
 *
 */
void times_table(void)
{
	int i, j = 0;
	for (i; i <= 9; i++)
	{
		for (j; j <= 9; j++)
		{
			printf("%d:, ", (i * j));
		}
		putchar('\n');
	}
}
