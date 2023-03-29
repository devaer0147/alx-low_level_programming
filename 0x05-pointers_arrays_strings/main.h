#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
/**
 * main - resets value to 98
 */
void reset_to_98(int *n);

/**
 * main - swap two integers value
 */
void swap_int(int *a, int *b);

/**
 * main - prints the lenght of a string
 */
int _strlen(char *s);

/**
 * main - print character
 */
void _putchar();

/**
 * main - prints a stringfollowed by new line
 */
void _puts(char *str);


/**
 * main - prints a string, in reverse, followed by a new line
 * */
void print_rev(char *s);
/**
 * main - reverses a string
 */
void rev_string(char *s);

/**
 * main - prints n elements of an array pf integers. followed by a new line
 */
void print_array(int *a, int n);

/**
 * main - function that copies the string from src to dest
 */
char *_strcpy(char *dest, char *src);
#endif
