#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: Prints the lowercase alphabet using _putchar
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
