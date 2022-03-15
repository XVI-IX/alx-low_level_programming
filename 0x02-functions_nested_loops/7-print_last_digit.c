#include "main.h"
/**
 * print_last_digit - Prints last digit
 * @n: number to check for last digit
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = -1 * (n % 10);
		_putchar(n + '0');
		return(n);
	}
	else
	{
		r = n % 10;
		_putchar(n + '0');
		return(n);
	}
}
