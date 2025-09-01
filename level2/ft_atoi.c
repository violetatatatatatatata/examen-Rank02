/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(const char *str);

int	main (int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s\n", argv[1]);
		printf("%d", ft_atoi(argv[1]));
	}
	printf("\n");
	return 0;
}

int	ft_atoi(const char *str)
{
	int	i, result, sign;

	sign = 1;
	i = 0;
	result = 0;

	// Whitespaces
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	// Signos
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	// Mientras los caracteres que le pase sean numeros o no sea nulo
	while ((str[i] > '0' && str[i] < '9') || str[i])
	{
		result += str[i] - '0';
		// Guardar espacio para el siguiente
		if (str[i + 1] != '\0')
			result *= 10;
		i++;
	}
	return (result * sign);
}
