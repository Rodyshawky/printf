#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <string.h>
/**
 * _printf - produces output according to a format
 * @format: format string
 * Description: call format_print function
 * Return: length of output string
 */
int _printf(const char *format, ...)
{
char *str;
int len = 0;
va_list arg;
int count = 0;
char c;

if (format == NULL)
	return (-1);
va_start(arg, format);
while (*format)
{
	if (*format != '%')
	{
		write(1, format, 1);
		count++;
	}
	else
	{
		format++;
		if (*format == '\0')
			break;
		else if (*format == '%')
                {
                        write(1, format, 1);
                        count++;
                }
		else if (*format == 'c')
		{
			c = va_arg(arg, int);
			write(1, &c, 1);
			count++;
		}
		else if (*format == 's')
		{
			str = va_arg(arg, char*);
			len = strlen(str);
			write(1, str, len);
			count += len;
		}
	}
		format++;
}
		va_end(arg);
		return (count);
}
