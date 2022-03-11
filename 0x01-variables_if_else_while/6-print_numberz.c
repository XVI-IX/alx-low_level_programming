#include <stdio.h>
/**
 * main - Function to print numbers using putchar()
 *
 * Return: digits
 */
int main(void)
{
	int i = 0;

	for (; i <= 9; )
	{
		putchar(i % 10 + '0');
		i++;
	}
}
