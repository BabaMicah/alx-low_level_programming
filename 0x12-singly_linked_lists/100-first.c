#include <stdio.h>

/**
 * firstfunc - prints before the main function is executed.
 *
 * Return: 0.
 */
void firstfunc(void) __attribute__ ((constructor));

void firstfunc(void)
{
char *s;

s = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
printf("%s", s);

}
