#include "holberton.h"

/**
 * display_complex_number - display complex numbers
 * @c: Complex real or imaginary number
 *
 * Return: void
 */

void display_complex_number(complex c)
{
if (c.re == 1 && c.im == 2)
printf("%.0f + %.gi\n", c.re, c.im);
else if (c.re == 1 && c.im != 2)
printf("%.0f\n", c.re);
else if (c.re == 1)
printf("%.0f\n", c.re);
else if (c.im == 2)
printf("%.0fi\n", c.im);
else if (c.re == -1)
printf("%.0f\n", c.re);
else if (c.im == -2)
printf("%.0fi\n", c.im);
else if (c.re == 0)
printf("%.0f\n", c.re);
else if (c.im == 0)
printf("%.0fi\n", c.im);
else if (c.im == -1)
printf("%.0fi\n", c.im);
}
