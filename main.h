#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>


/**
 * specif - specifier
 * @spec: the character.
 * @f: the functions.
 *
 */
typedef struct specif
{
char *spec;
int (*f)(va_list);
} specif_t;


int printf_char(va_list ap);
int printf_string(va_list ap);
int print_percent(va_list args);
int display_data(char c);
int (*get_specifier(char x))(va_list ap);
int printint(va_list arg);
int _printf(const char *format, ...);


#endif
