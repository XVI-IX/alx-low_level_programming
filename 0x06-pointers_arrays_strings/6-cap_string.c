#include "main.h"
/**
 * *cap_string - function that capitalizes all the words of a string.
 * @s: String to be capitalized
 *
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;

	if (s[0] > 96 && s[0] < 123)
	{
		s[0] -= 32;
	}

	for (; s[i] != '\0'; i++)
	{
		switch (s[i])
		{
		case ' ': case ',': case ';': case '"':
		case '!': case '?': case '(': case ')':
		case '{': case '}': case '.': case '\n': case '\t':
			if (s[i + 1] > 96 && s[i + 1] < 123)
			{
				s[i + 1] -= 32;
			}
		}
	}

	return (s);
}
