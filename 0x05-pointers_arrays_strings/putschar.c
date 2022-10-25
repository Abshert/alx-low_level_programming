#include <unistd.>

/**
 * _putschar - writes character c to stdout
 * @c: char to be printed
 * Return: On success 1
 * */
int _putschar(char c)
{
	return (write (1, &c, 1));
}

