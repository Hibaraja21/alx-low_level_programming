#include <stdio.h>
#include <stdlib.h>


/**
 * main -  program that prints the opcodes of its own main function
 *
 * @argc: num of args passed to the program
 * @argv: array of args
 *
 * Return: on success, 1 or 2 in case of failure
*/

int main(int argc, char *argv[])
{

int indx, b;
int (*address)(int, char **) = main;
unsigned char opcode;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

b = atoi(argv[1]);

if (b < 0)
{
printf("Error\n");
exit(2);
}

for (indx = 0; indx <  b; indx++)
{
opcode = *(unsigned char *)address;
printf("%.2x", opcode);

if (indx == b - 1)
continue;
printf(" ");
address++;
}
printf("\n");
return (0);
}
