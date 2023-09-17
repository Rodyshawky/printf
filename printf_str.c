#include "main.h"
#include<string.h>
/**
 * printf_str- print a string.
 * @str: input string
 * Return: nothing
 */
void printf_string(char *str)
{
	int i, len = 0;
	va_list ls;

	va_arg(ls, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = strlen(str);
		for (i = 0; i < len; i++)
			print_char(s[i]);
		return (len);
	}
	else
	{
		len = strlen(str);
		for (i = 0; i < len; i++)
			print_char(str[i]);
	}
}
