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
	int c = 'o';
	char *s = "Hello";
	_printf("%c", c);
	_printf("%%");
	_printf("%s", s);

	return (0);
}
