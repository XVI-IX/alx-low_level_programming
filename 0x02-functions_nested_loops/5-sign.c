#include "main.h"
/**
 * print_sign - Prints sign of a number
 * @n: number to check for sign
 *
 * Description: Prints sign of number
 *
 * Return: returns 1 if positive,
 * returns 0 if 0 and returns -1 if negative
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('\-1');
		return (-1);
	}
}