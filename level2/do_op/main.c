/*
Assignment name  : do_op
Expected files   : *.c, *.h
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.
*/

#include "operations.h"

int	main(int argc, char **argv)
{
	int	int1, int2;
	char	op;

	if (argc == 7)
	{
		int1 = atoi(argv[1]);	
		op = argv[2][0];
		int2 = atoi(argv[3]);
		set_operation(int1, int2, op);
	}
	write (1, "\n", 1);
	return 0;
}

void	set_operation(int num1, int num2, char op)
{
	if (op == '+')
		printf("%d", suma(num1, num2));
	else if (op == '-')
		printf("%d", resta(num1, num2));
	else if (op == '*')
		printf("%d", mult(num1, num2));
	else if (op == '/')
		printf("%d", division(num1, num2));
	else if (op == '%')
		printf("%d", modulo(num1, num2));
	else
		return;
}
