#include "main.h"

/**
 *add_char_buff - Add a character to the buffer
 *@list_arg: List of arguments
 *@buffer: Array where save the characters
 *@pos: Position of buffer to save the char
 *
 * Return: Always 1
 **/
int add_char_buff(va_list list_arg, char *buffer, int pos)
{
	buffer[pos] = va_arg(list_arg, int);
	return (1);
}

/**
 *add_string_buff - Add a string to the buffer
 *@list_arg: List of arguments
 *@buffer: Array where save the string
 *@pos: Position of buffer to save the string
 *
 * Return: Length of the string
 **/
int add_string_buff(va_list list_arg, char *buffer, int pos)
{
	char *str;

	str = va_arg(list_arg, char *);

	if (!str)
		str = "(null)";
	buffer = _strcpy(buffer, str, pos);

	return (_strlen(str));
}

/**
 *add_porcent_buff - Add a porcent to the buffer
 *@list_arg: List of arguments
 *@buffer: Array where save the porcent
 *@pos: Position of buffer to save the porcent
 *
 * Return: Always 1
 **/
int add_porcent_buff(va_list list_arg, char *buffer, int pos)
{
	list_arg = list_arg;
	buffer[pos] = '%';
	return (1);
}

/**
 *add_number_buff - Add a decimal to the buffer
 *@list_arg: List of arguments
 *@buffer: Array where save the number
 *@pos: Position of buffer to save the number
 *
 * Return: Length of digits
 **/
int add_number_buff(va_list list_arg, char *buffer, int pos)
{
	long int num = va_arg(list_arg, int), len = 0, i;
	char *aux;

	if (num == 0)
	{
		buffer[pos] = '0';
		return (len++);
	}
	if (num > 0)
	{
		aux = malloc(sizeof(int) * 11);
		for (i = 0; (num > 0) && (i < 11); i++)
		{
			aux[i] = (num % 10) + '0';
			num = num / 10;
		}
		rev_string(aux);
		buffer = _strcpy(buffer, aux, pos);
		len = i;
	}
	if (num < 0)
	{
		buffer[pos] = '-';
		aux = malloc(sizeof(int) * 11);
		num = num * -1;
		for (i = 0; (num > 0) && (i < 11); i++)
		{
			aux[i] = (num % 10) + '0';
			num = num / 10;
		}
		rev_string(aux);
		buffer = _strcpy(buffer, aux, pos + 1);
		len = i + 1;
	}

	free(aux);
	return (len);
}

/**
 *specifiers_handler - Selects the correct function
 *@s: Character passed in the format to the function
 *
 * Return: The correct function to do the conversion
 **/
int (*specifiers_handler(char s))(va_list, char *, int)
{
	int i;
	f_handler specifiers[] = {
		{'c', add_char_buff},
		{'s', add_string_buff},
		{'%', add_porcent_buff},
		{'d', add_number_buff},
		{'i', add_number_buff},
		{0, NULL}};

	for (i = 0; specifiers[i].f; i++)
	{
		if (specifiers[i].c == s)
			return (specifiers[i].f);
	}
	return (specifiers[i].f);
}
