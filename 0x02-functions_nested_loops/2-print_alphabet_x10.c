#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet_x10(void)
{
	int  m;
	char n;

	for (m = 0; m < 10; m++)
	{
		for (n = 'a'; m <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
