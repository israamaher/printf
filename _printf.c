#include "main.h"

/**
 * _printf -  prints all
 * @format: the format string
 * Return: int of print
 */
int _printf(const char *format, ...)
{
if (format != NULL)
{
int len = 0, i, (*op)(va_list);
va_list prams;
va_start(prams, format);
i = 0;

if (format[0] == '%' && format[1] == '\0')
return (-1);
while (format != NULL && format[i] != '\0')
{
if (format[i] == '%')
{
if (format[i + 1] == '%')
{
len += display_data(format[i]);
i += 2;
}
else
{
op = get_specifier(format[i + 1]);
if (op)
len += op(prams);
else
len = display_data(format[i]) + display_data(format[i + 1]);
i += 2;
}
}
else
{
len += display_data(format[i]);
i++;
}
}
va_end(prams);
return (len);
}
else
return (-1);
}

