/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int num);
*/

#include <stdio.h>
#include <stdlib.h>

int	count_digits(int num);

char	*ft_itoa(int nbr)
{
	char	*str;
	int		len, i;
	long	num;

	num = nbr;
	// Reservar espacio en memoria para el string de integer y el caracter nulo
	len = count_digits(num);
	str = (char *)malloc(len * (sizeof(char) + 1));
	if (!str)
		return NULL;
	// Anyadir caracter nulo
	str[len] = '\0';
	i = len - 1;
	// CONTROLAR INPUTS NEGATIVOS !!!
	if (num < 0)
	{
		str[0] = '-';
		num = -num;	// convertir positivo
	}
	// Almacenar los numeros dentro del array
	while(num > 9)
	{
		str[i] = num % 10 + '0';		// !!!
		num /= 10;
		i--;
	}
	str[i] = num + '0';
	return (str);
}

int	count_digits(int num)
{
	int count = 0;

	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return count;
}

int	main()
{
	int	num = 390;

	printf("%s", ft_itoa(num));
	return 0;
}
