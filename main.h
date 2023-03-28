#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _strlen(const char *str);
int _putchar(char c);

/* handler.c */
int handler(const char *str, va_list list);
int percent_handler(const char *str, va_list list, int *i);





#endif /* MAIN_H */
