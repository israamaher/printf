#include "main.h"

/**
 * printf_char - prints character
 * @prams: character prams
 * Return: number of print char
 */
int printf_char(va_list prams)
{
int ch;
ch = va_arg(prams, int);
return (display_data(ch));
}
