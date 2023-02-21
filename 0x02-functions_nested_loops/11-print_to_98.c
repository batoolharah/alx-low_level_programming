#include "main.h"

/**
* print_to_98 - print all natural numbers from n to 98
* @n: single number input
* Return: Nothing
*/

void print_to_98(int n)
{
	for (n; n <= 98; n++)
	{
		printf("%d, ", n);
	}
	printf("%d\n", 98);
}
