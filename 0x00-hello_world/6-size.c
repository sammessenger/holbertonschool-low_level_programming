#include <stdio.h>
#include <stdlib.h>

int main()
{
int c = sizeof(char);
int i = sizeof(int);
int l = sizeof(long);
int o = sizeof(long long);
int f = sizeof(float);

printf("Size of a char: %i byte(s) \n", c);
printf("Size of an int: %i byte(s) \n", i);
printf("Size of a long int: %i byte(s) \n", l);
printf("Size of a long long int: %i byte(s) \n", o);
printf("Size of a float: %i byte(s)\n", f);
return (0);
}
