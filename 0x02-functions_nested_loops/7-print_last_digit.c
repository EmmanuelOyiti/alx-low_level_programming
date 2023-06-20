#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int d;

	d = n % 10;

	if (d < 0)
	{
		_putchar(-d + 48);
		return (-d);
	}
	else
	{
		_putchar(d + 48);
		return (d);
	}
}
