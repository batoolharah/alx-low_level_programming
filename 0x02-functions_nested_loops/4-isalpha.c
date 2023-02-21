#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - a function that  checks for alphabetic character
 * @c: single letter input
 * Return: Always 0 (Succes)
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
		return (0);
}
