#include "main.h"

/**
 * print_rev_string - Print reverese string.
 * @args: arguments
 * Return: length of the output
 */
int print_rev_string(va_list args)
{

	int count_fun = 0, i = 0;
	char *s = va_arg(args, char *);

	if (!s)
		s = "(null)";
	while (s[i])
	{
		i++;
	}
	while (i >= =)
	{
		count_fun += _putchar(s[i]);
		i--;
	}
	count_fun--;
	return (count_fun);
}
