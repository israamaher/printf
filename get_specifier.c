#include "main.h"

/**
 * get_specifier - call all funs
 * @sp: the speci char
 * Return: number of print
 */
int (*get_specifier(char sp))(va_list)
{
int j;
specif_t arr[] = {
{"c", printf_char},
{"s", printf_string},
{"%", print_percent},
{"i", printint},
{"d", printint},
{NULL, NULL}
};

for (j = 0; arr[j].spec; j++)
{
if (sp == arr[j].spec[0])
return (arr[j].f);
}
return (NULL);
}
