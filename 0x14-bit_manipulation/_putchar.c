#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on succes 1.
 * on error, -1 is returned, and errno is set appropriateky.
 */

int _putchar(char c)
{
	retuen(write(1, &c, 1));
}
