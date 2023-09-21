#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;
int print_char(char c);
int get_flag(char s, flags_t *f);
int (*format_print(char s))(va_list, flags_t);
int _printf(const char *format, ...);
int (*pfunc)(va_list, flags_t *);
int _putchar(char c);
#endif
