#include "main.h"

/**
 * _print - print char.
 * @str: string.
 *
 * Return: string length.
 */

int _print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);

	return (i);
}
