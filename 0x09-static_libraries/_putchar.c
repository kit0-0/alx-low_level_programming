#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
<<<<<<<< HEAD:0x09-static_libraries/_putchar.c
	return (write(1, &c, 1));
========
  return (write(1, &c, 1));
>>>>>>>> 5f649dbb68cf2ec81084e194ea4de2d41ed62852:0x0B-malloc_free/_putchar.c
}
