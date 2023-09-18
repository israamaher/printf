#include "main.h"
#include<stdio.h>

/**
 * display_data -  prints the char c
 * @c: character to compare
 * Return: on Success 1
 */
int display_data(char c)
{
return (write(1, &c, 1));
}
