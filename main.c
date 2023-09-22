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
	_printf("%!");
	_printf("%s", s);
	_printf("Let's print a simple sentence.\n");
	_printf("%K\n");
	_printf("%c", '\0');
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	return (0);
}
