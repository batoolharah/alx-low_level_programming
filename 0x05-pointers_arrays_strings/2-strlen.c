#include  "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strlen - Function that returns the length of a string
 *
 * @s: this is the input string
 *
 * Return: Lenngth of the string
 */
int _strlen(char *s)
{
	int size = 0;

	while (s[i] != '\0')
	{
		size++;
	}
	return (size);
}
