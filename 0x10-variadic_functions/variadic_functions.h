#ifndef VAR_FUNC
#define VAR_FUNC

/** Header file for 0x10-variadic_functions */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif