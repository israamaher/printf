#include "main.h"

/**
 * printf_string - prints a string
 * @prams: string  prams
 * Return: number of print string
 */
int printf_string(va_list prams)
{
int i, len = 0;
char *s;

i = 0;
s = va_arg(prams, char*);
if (s == NULL)
s = "(null)";
while (s[i] != '\0')
{
display_data(s[i]);
i++;
len++;
}
return (len);
}
