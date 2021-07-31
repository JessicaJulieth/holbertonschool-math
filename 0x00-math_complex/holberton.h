#ifndef MATH_HEADER_H
#define MATH_HEADER_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct complex - Struct with a complex number
 * @re: This is a part of the real number
 * @im: This is a part of the imaginary number
 * 
 * Return: Complex real o imaginary number
 */

typedef struct complex
{
    double re;
    double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg (double m, double arg, complex *c3);

#endif
