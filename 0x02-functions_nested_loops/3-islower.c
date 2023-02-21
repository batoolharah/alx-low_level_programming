#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - a function that hecks for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
		return (0);
}
