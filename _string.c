#include "main.h"

/**
 *_strlen - Length of a string
 *@s: Pointer to string
 *Description: Function for get length of a string
 *Return: Integer of length
 *
 **/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}

/**
 *_strcpy - Copy an string
 *@dest: String copied
 *@src: String original
 *@pos: Position initial
 *Description: Function for copy an string starting from a given position
 *Return: A pointer to new string
 *
 **/
char *_strcpy(char *dest, char *src, int pos)
{
	int i;
	int j;

	i = _strlen(src);

	for (j = pos; j < (i + pos); j++)
	{
		dest[j] = src[j - pos];
	}
	return (dest);
}

/**
 *rev_string - Reverse a string
 *@s: Pointer to string
 *Description: Function for reverse a string
 *Return: void
 *
 **/
void rev_string(char *s)
{
	int i;
	int j;
	char temp;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	j = i - 1;
	i = 0;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}

/**
 *is_specifier - Check if a char is a specifier
 *@c: Char to check
 *
 *Return: 1 To is specifier or 0 for other char
 *
 **/
int is_specifier(char c)
{
	if (c == 's' || c == 'c' || c == '%' || c == 'd' || c == 'i')
		return (1);

	return (0);
}
