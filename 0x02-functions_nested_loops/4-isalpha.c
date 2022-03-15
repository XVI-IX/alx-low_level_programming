#include <stdio.h>
/**
 * _isalpha - Entry point into program
 * @c: charcater to be checked
 *
 * Description: Defines a function to check if characcter is alphabet
 *
 * Return: always 0
 *
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
