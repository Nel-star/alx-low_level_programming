#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints a reverse string
 * @s: A pointer to an int that will be changed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l, i;
	char ch;

	for (l = 0; s[l] != '\0'; ++l)
		;

	for (i = 0; i < l / 2; ++i)
	{
		ch = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = ch;
	}
}
