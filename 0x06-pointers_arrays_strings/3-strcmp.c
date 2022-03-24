#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @*s1: pointer to string 1
 * @*s2: pointer to string 2
 *
 * Return: 0 when exact,
 * 1 when greater than, -1 when less than
 */
int _strcmp(char *s1, char *s2)
{
	int l = 0;

	for (; s1[l] != '\0' && s2[j] != '\0'; j++)
	{
		if (s1[j] != s2[j])
		{
			return ( s1[j] - s2[j]);
		}
		else
		{
			return (0);
		}
	}
}
