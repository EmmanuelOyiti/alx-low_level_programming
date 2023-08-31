#include "main.h"

/**
 * get_bit - returns the value of a bit, at a given index in decimal number
 * @n: is the number to get searched
 * @index: is the index of the bit
 * Return: the value of the bit at the given index,
*/

 int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

