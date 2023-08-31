#include "main.h"

/**
 * set_bit - it sets the bit, at a given index to 1
 * @n: is the pointer to the num to be changed
 * @index: is the index of the bit, to be set to 1
 *
 * Return: returns 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
