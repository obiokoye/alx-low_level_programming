#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * on error, -1 is returned, and error is set appropriately.
 */
int _putcahr(char c)
{
	return (write(1, &c, 1));
}
