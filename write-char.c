#include "main.h"

/**
 * write_char - writes the character c to stdout
 * @c: the character to print
 * Return: on success 1 if fail -1 is returned errno is set appropriately
 */
int write_char(char c)
{
	return (write(1, &c, 1));
}
