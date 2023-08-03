#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index in a decimal number
 * @n: is the number to be searched
 * @index: is the index of the bit
 *
 * Return: the value of the bit at the given index,
 * or returns -1 if the index is invalid
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 6)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
