#include <stdio.h>

/**
 *main - Entry Point;
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
 *sizeof - Initial Description;
 *
 *byte(s)\n" - Number of bytes
 *
 *sizeof(intType) - Evaluates the size of a variable;
 */

printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
return (0);
/**
 *sizeof - Initial Description;
 *
 *byte(s)\n" - Number of bytes
 *
 *sizeof(intType) - Evaluates the size of a variable;
 */

}
