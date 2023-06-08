#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int a;
	int b;
	char *str;

	str = "school";
	a = _printf("%r\n", "Holberton");
	printf("--->%d\n", a);

	b = _printf("%r\n", str);
	printf("%d\n", b);

	b = _printf("%r\n", str);
	printf("%d\n", b);
	return (0);
}
