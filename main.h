#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>



int _printf(const char *format, ...);
int _strlen(const char *str);
int _putchar(char c);
int buffer(char c);
void free_buffer(void);

/* handler.c */
int handler(const char *str, va_list list);
int percent_handler(const char *str, va_list list, int *i);

/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

/* format */
int _print(char *str);
int print_string(va_list list);
int print_char(va_list list);






#endif /* MAIN_H */
