#include <stdio.h>

/**
 *main - entry point;
 *
 *return: Always 0(success);
 */

int main(void)
{
int intType;
float floatType;
char charType;
long int longintType;
long long int longlongintType;

/**
 *sizeof - initial description;
 *
 *bytes\n" - number of bytes
 *sizeof(intType) evaluates the size of a variable;
 *
 */

printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of long long int: %zu bytes\n", sizeof(longlongintType));
printf("Size of long int: %zu bytes\n", sizeof(longintType));
return (0);

}
