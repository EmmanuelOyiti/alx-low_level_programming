#include "main.h"
#include <unistd.h>
/**
 * _putchar - it writes character c to stdout
 * @c: This is the character to print
 * Return: On success returns 1.
 * On error, -1 returns, and error then is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
