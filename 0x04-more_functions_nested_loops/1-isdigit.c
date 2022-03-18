#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Checks if character is a digit
 * @c: Character to be checked
 *
 * Return: 1 if true and 0 if false
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
