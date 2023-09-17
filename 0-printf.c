#include"main.h"
#include<string.h>

int print_char(char c)
{
        return (write(1, &c, 1));
}
int print_N(char *str)
{  
	int i, len = 0;
        va_list ls;
        int nprint = 0;
        char s;

        if (str == NULL)
                return (-1);
        while (*str == '\0')
        {
                if (*str == '%')
                {
                       str++;
                if (*str == 'c')
                {
                        s = va_arg(ls, int);
                        print_char(s);
                        nprint++;
                }
                else if (*str == 's' )
                {
                        str = va_arg(ls, char *);
                        len = strlen(str);
                        for (i = 0; i < len; i++)
                        {
                                print_char(str[i]);
                                nprint++;
                        }
                }
                else if(*str == '%')
                {
                        print_char('%');
                        nprint++;
		 }
                else
                {
                        print_char(*str);
                        nprint++;
                }
                }
        }
        return (nprint);
}
