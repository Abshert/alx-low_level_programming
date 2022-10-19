/*
 * File: 0-holberton.c
 * Auth: Aisha Abdul Salihu
 *
 */

#include "main.h"
#include <unistd.h>

/**
 * main - Prints "Holberton" followed by a new line.
 *
 * Return: Always 0.
 */
int _putchar(char c)
{

	return (write (1, &c, 1));
}
