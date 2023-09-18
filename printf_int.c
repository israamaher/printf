#include "main.h"
/**
 * integer - a function that prints an integer.
 * @num: input integer
 * Return: digit len
 */
int integer(int num)
{
	int len, num2;
	unsigned int unint;

	if (num < 0)
		num2 = -1 * num;
	len = 0;
	num2 = num;
	if (num <= 0)
		len++;

	while (num2 != 0)
	{
		num2 = num2 / 10;
		len++;
	}
	if (num < 0)
	{
		display_data('-');
		unint = -num;
	}
	else
		unint = num;

	if (unint >= 10)
		integer(unint / 10);
	display_data(unint % 10 + '0');
	return (len);
}
/**
 * printint - prints a number
 * @arg: va_list with number to print
 * Return: number of characters printed
 */
int printint(va_list arg)
{
	int num = va_arg(arg, int);
	int newNum;

	newNum = integer(num);
	return (newNum);
}
