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

	_printf("%c\n", c);
	_printf("%!");
	_printf("%s\n", s);
	_printf("Let's print a simple sentence.\n");
	_printf("%K\n");
	_printf("%c", '\0');
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	return (0);
}
