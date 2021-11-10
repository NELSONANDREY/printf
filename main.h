#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/**
 * struct handler - Struct handler
 *
 * @c: The specifiers
 * @f: The function associated
 */
typedef struct handler
{
	char c;
	int (*f)(va_list list, char *buffer, int pos);
} f_handler;

char *_strcpy(char *dest, char *src, int pos);
int _strlen(char *s);
void rev_string(char *s);
int is_specifier(char c);
int _printf(const char *format, ...);
int (*specifiers_handler(char s))(va_list, char *, int);
int add_char_buff(va_list, char *, int);
int add_string_buff(va_list, char *, int);
int add_porcent_buff(va_list, char *, int);
int add_number_buff(va_list list_arg, char *buffer, int pos);
int print_buff(char *buffer, int);

#endif /* MAIN_H */
