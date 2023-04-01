#include "main.h"

/**
 * print_rev_string - Print a string in reverse
 * @list: List of arguments
 *
 * Return: Length of the string
 **/
int  print_rev_string(va_list list)
{
	int i, length;
	const char *str;

	str = va_arg(list, const char *);

	length = _strlen(str);

	for (i = length - 1; i >= 0; i--)
		_putchar(str[i]);

	return (length);
}
