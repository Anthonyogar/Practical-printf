#include "main.h"

/**
 * _printf - receives the main string and all the necessary parameters to
 * print a formated string
 * @format: a string containing all the desired characteres
 * Return: a total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	def_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_hex},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
