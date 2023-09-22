#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - produces output according to a format
 * @format: format string
 * Description: call format_print function
 * Return: length of output string
 */
int _printf(const char *format, ...)
{
va_list arg;

int count = 0;

va_start(arg, format);
while (*format)
{
if (*format != '%')
{
putchar(*format);
count++;
}
else
{
format++;
if (*format == '\0')
break;
else if (*format == '%')
{
putchar('%');
count++;
}
else if (*format == 'd' || *format == 'i')
{
int num = va_arg(arg, int);
printf("%d", num);
count++;
}
else if (*format == 'b') // Handle binary conversion
{
unsigned int num = va_arg(arg, unsigned int);
int binary[32]; // Assuming 32-bit integer
int i;
for (i = 0; i < 32; i++)
{
binary[i] = (num >> (31 - i)) & 1;
putchar(binary[i] + '0');
}
count += 32; // Assuming 32-bit integer
}
}
format++;
}
va_end(arg);
return (count);
}

int main(void)
{
_printf("%b\n", 98);
return (0);
}

