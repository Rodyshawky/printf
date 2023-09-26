#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char c = 'o';
	char *s = "Hello";
	int x = 5;

	_printf("%c\n", c);
	_printf("%!");
	_printf("%s\n", s);
	_printf("Let's print a simple sentence.\n");
	_printf("%d\n", x);
	_printf("%s", "This sentence is retrieved from va_args!\n");
	_printf("%d", 1024);
	_printf("%d", 0);
	return (0);
}
