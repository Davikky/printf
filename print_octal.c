#include "main.h"

/**
 * print_octal - Function to print an octal unsigned int
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_octal(va_list list)
{
	char *p_buff;
	int length;

	p_buff = itoa(va_arg(list, unsigned int), 8);

	length = _print((p_buff != NULL) ? p_buff : "NULL");

	return (length);
}
