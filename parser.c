#include "main.h"

/**
 * parser - recieves the main string and all the necessary pararmeters to
 * print a formated string
 *
 * @format: a string containing all the desired characters
 * @f_list: a list of all the posible functions
 * @arg_list: a list containing all the arguments passed to the program
 * Return: a total count of the characters printed
 */
int parser(const char *format, def_t f_list[], va_list arg_list)
{
	int i, j, r_val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].opr != NULL; j++)
			{
				if (format[i + 1] == f_list[j].opr[0])
				{
					r_val = f_list[j].f(arg_list);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}
			if (f_list[j].opr == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					write_char(format[i]);
					write_char(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			write_char(format[i]);
			printed_chars++;
		}
	}
	return (printed_chars);
}
