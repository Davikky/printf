#include "main.h"

/**
 * print_hexadecimal_low - Print an unsigned int in hexadecimal format-
 * using lowercase letters
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_hexadecimal_low(va_list list)
{
	char *p_buff;
	int length;

	p_buff = itoa(va_arg(list, unsigned int), 16);

	length = _print((p_buff != NULL) ? p_buff : "NULL");

	return (length);
}
