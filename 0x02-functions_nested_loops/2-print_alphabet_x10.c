#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	int n;

	for (int m = 1; m < 11; m++)
	{
		for (n = 'a'; m <= 'z'; n++)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
