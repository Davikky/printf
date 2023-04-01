#include "main.h"

/**
 * print_unsigned - Function to print an unsigned int
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_unsigned(va_list list)
{
	char *p_buff;
	int length;

	p_buff = itoa(va_arg(list, unsigned int), 10);

	length = _print((p_buff != NULL) ? p_buff : "NULL");

	return (length);
}
