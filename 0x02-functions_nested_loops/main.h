#ifndef MAIN_H
#define MAIN_H

#include <ctype.h>
/**
 * main - entry
 * Return: 0;
 */
void _putchar(char p);

/**
 * print_alphabet - print lowercase alphabet
 * Return: Always 0.
 */
void print_alphabet(void);

/**
 * main - print_alphabet_x10 - print lowercase alphabet ten times
 * Return: Always 0.
 */
void print_alphabet_x10(void);

/**
 * main - check lowercase
 * Return: Always 0.
 */
int _islower(int c);

/**
 * main - check is alhabet
 */
int _isalpha(int c);

/**
 * main - checck to print operand sign
 */
int print_sign(int n);

/**
 * main - computes the absolute value of an integer
 */
int _abs(int n);

/**
 * main - prints the last digit of given parameters
 */
int print_last_digit(int n);

/**
 * main - prints all the possible combination from the 24 hours time
 */
void jack_bauer(void);

/**
 * main - prints the multiplication table 9
 */
void times_table(void);

/**
 * main - print sum of two integers
 */
int add(int a, int b);
#endif
