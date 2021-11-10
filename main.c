#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    /*unsigned int ui;
    void addr;*/
   
	
   /* l = l + 1024;
   len =  _printf("%d\n", 1024);
   len2 = printf("%d\n", 1024);
	printf("len[%d] len2[%i]\n",len, len2);
    _printf("%d\n", -1024);
    printf("%d\n", -1024);
    _printf("%d\n", 0);
    printf("%d\n", 0);
   len =  _printf("%d\n", INT_MAX);
   len2 = printf("%d\n", INT_MAX);
	printf("len[%d] len2[%i]\n", len, len2);
	_printf("%d\n", INT_MIN);
    printf("%d\n", INT_MIN);
    _printf("%d", l);
    printf("%d\n", l);
    len = _printf("prueba %c\n", 64);
    len2 = printf("prueba %c\n", 64);
    ui = (unsigned int)INT_MAX + 1024;
    _printf("Length:[%d, %i]\n", (-3 - 3) + 9, len);
    printf("Length:[%d, %i]\n",  (-3 - 3) + 9, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("%d - %d = %d\n", 1024, 2048, -1024);
    printf("%d - %d = %d\n", 1024, 2048, -1024);
    _printf("There is %d bytes in %d KB\n", 1024, 1);
    printf("There is %d bytes in %d KB\n", 1024, 1);
    printf("%d\n", INT_MAX);
    _printf("%d\n", INT_MAX);
  len =  _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
   len2 = printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("len[%d] len2[%i]\n", len, len2);
	_printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
   len=_printf("Character:[%c]\n", 'H');
    len2=printf("Character:[%c]\n", 'H');
	printf("%d %d\n", len, len2);
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
	printf("%d %d\n", len, len2);
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);*/
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
	_printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
	printf("%d %d\n", len, len2);
/*_printf("Let's print a simple sentence.\n");
printf("Let's print a simple sentence.\n");
printf("%d %d\n", len, len2);
_printf("%c", 'S');
printf("\n");
printf("%c", 'S');
printf("\n");
printf("%d %d\n", len, len2);
_printf("A char inside a sentence: %c. Did it work?\n", 'F');
printf("A char inside a sentence: %c. Did it work?\n", 'F');
printf("%d %d\n", len, len2);
_printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
printf("%d %d\n", len, len2);
_printf("%s", "This sentence is retrieved from va_args!\n");
printf("%s", "This sentence is retrieved from va_args!\n");
printf("%d %d\n", len, len2);
_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
printf("%d %d\n", len, len2);
_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char )0);
_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
printf("%d %d\n", len, len2);
printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
printf("\n");
_printf("%%");
printf("\n");
printf("%%");
_printf("Should print a single percent sign: %%\n");
printf("Should print a single percent sign: %%\n");
_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
_printf("css%ccs%scscscs", 'T', "Test");
printf("\n");
printf("css%ccs%scscscs", 'T', "Test");
printf("\n");*/
/*_printf(str);
printf(str);*/
/*_printf("man gcc:\n%s", str);/
/printf("man gcc:\n%s", str);*/
/*_printf(NULL);
printf("\n");
printf(NULL);
printf("\n");
_printf("%c", '\0');
printf("\n");
printf("%c", '\0');
printf("\n");*/
_printf("%");
printf("\n");
printf("%d %d\n", len, len2);
printf("%");
printf("\n");
printf("%d %d\n", len, len2);
_printf("%!\n");
printf("%!\n");
printf("%d %d\n", len, len2);
_printf("%K\n");
printf("%K\n");
printf("%d %d\n", len, len2);
    return (0);
}