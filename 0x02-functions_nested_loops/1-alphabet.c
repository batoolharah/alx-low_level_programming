#include <stdlib.h>
#include <time.h>
#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * main -  prints the alphabet, in lowercase, followed by a new line.
 * Return: Always 0.
*/
void print_alphabet(void)
{
	for (char i = "a"; i < "z"; i++)
	{
		_putchar(i);
	}
	_putchar("\n");
}
int main(void)
{
	print_alphabet();
	return (0);
}

