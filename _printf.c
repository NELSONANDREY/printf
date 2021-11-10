#include "main.h"

/**
 *_printf - Function to prints
 *@format: String principal
 *@...: Optional parameters
 *Description: Function that produces output according to a format
 *Return: The number of the characters printed
 *
 **/
int _printf(const char *format, ...)
{
	va_list list_arg;
	int i, char_printed = 0;
	char buffer[2048] = "";
	int (*fun_conver)(va_list list_arg, char *buffer, int char_printed);

	va_start(list_arg, format);
	if (list_arg == NULL)
		return (-1);
	if (format == NULL)
		return (-1);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (is_specifier(format[i + 1]))
			{
				fun_conver = specifiers_handler(format[i + 1]);
				if (fun_conver == NULL)
					return (-1);
				char_printed += fun_conver(list_arg, buffer, char_printed);
				i++;
			}
			else
			{
				buffer[char_printed] = format[i];
				char_printed++;
			}
		}
		else
		{
			buffer[char_printed] = format[i];
			char_printed++;
		}
	}
	write(1, buffer, char_printed);
	va_end(list_arg);
	return (char_printed);
}
