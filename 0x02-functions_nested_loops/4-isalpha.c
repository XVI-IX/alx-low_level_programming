#include "main.h"
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
	if ((c > 64 && c < 91))
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
