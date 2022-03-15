#include <stdio.h>
/**
* _islower - check if char is lowercase
* @c: value to be checked if lower
*
* Description: Checks if character inputed is lowercase
*
* Return: 1 if true and 0 otherwise
*/
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
