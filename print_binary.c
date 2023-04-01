#include "main.h"

/**
 * print_binary - Print a number in base 2
 * @list: Number to print in base 2
 *
 * Return: Length of the numbers in binary
 */
int print_binary(va_list list)
{
	char *p_buff;
	int length;

	p_buff = itoa(va_arg(list, unsigned int), 2);

	length = _print(p_buff);

	return (length);
}
