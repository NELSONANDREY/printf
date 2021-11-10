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
