#include "main.h"
#include <stdio.h>
/**
 * set_string - redirect.
 * @s: double pointer to address
 * @to: the original pointer
 *
 * Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
