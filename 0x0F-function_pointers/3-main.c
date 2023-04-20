#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - check the code for the school students
 *
 * @argc: The num of args supplied to the program.
 * @argv: argument vector
 *
 * Return: Always 0.
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
int number1, number2;
char *op;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

number1 = atoi(argv[1]);
op = argv[2];
number2 = atoi(argv[3]);

if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*op == '/' && number2 == 0) || (*op == '%' && number2 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(number1, number2));
return (0);
}
