#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = " aaa\naaa	aaa , aaa ;aaa .aaa !aaa ?aaa \"aaa (aaa )aaa {aaa }aaa \t aaa";
    char *p;

    p = cap_string(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
