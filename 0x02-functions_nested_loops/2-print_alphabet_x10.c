#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet_x10(void)
{
	int n, m;

	for (m = 0; m < 11; m++)
	{
		for (n = 'a'; m <= 'z'; n++)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
