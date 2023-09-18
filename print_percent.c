#include "main.h"

/**
 * print_percent - pass the percent sing
 * @prams: string prams
 * Return: number of print percent
 *
 */
int print_percent(va_list prams)
{
char *s;
s = "%";
if (va_arg(prams, int) != *s)
{
return (-1);
}
return (*s);
}
