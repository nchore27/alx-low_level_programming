#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
#include <stdio.h>

/**
 * struct fs - Struct fs
 * @def: either c f i or s
 * @mat: function associated with def
 * @s: formatting string
 */
typedef struct fs
{
	void (*mat)(va_list, char *);
	char *s;
	char def;
} fs;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_ci(va_list v, char *s);
void print_d(va_list v, char *s);
void print_s(va_list v, char *s);

#endif
