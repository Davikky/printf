#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: input format
 *
 * Return: Number of characters printed excluding null byte
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int output_count = 0;

	for (const char	*p = format; *p != '\0'; p++)
	{
		if (*p != '%')
		{
			_putchar(*p);
			output_count++;
		}
		else
		{
			switch (*(++p))
			{
				case 'c': {
						char c = (char)va_arg(args, int);

						_putchar(c);
						output_count++;
						break;
					}
				case 's': {
					char *s = va_arg(args, char *);

					for (; *s != '\0'; s++)
					{
						_putchar(*s);
						output_count++;
					}
					break;
					}
				case '%': {
					_putchar('%');
					output_count++;
					break;
					}
				default: {
					fprintf(stderr, "error: invalid conversion specifier\n");
					va_end(args);
					return (-1);
					}
			}
		}
	}
	va_end(args);
	return (output_count);
}
