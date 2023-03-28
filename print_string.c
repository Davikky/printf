#include "main.h"

/**
 * print_string - Print string
 * @list: list.
 *
 * Return: String length.
 */

int print_string(va_list list)
{
	char *p;
	int str_len;

	p = va_arg(list, char*);
	str_len = _print((p != NULL) ? p : "(null)");

	return (str_len);
}
