/*
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/

int	main(int argc, char **argv)
{
	int	sum, nbr;

	if (argc == 2)
	{
		if (argv[1][0] != '-')
		{
			nbr = ft_atoi(&argv[1])
			sum = sum_primos(nbr);
			write(1, &sum, 1);
		}
		else
			write(1, "0", 2);
	}
	write(1, "\n", 1);
	return 0;
}

int	sum_primos(int num)
{
	int suma = 0;
	
	while (num > 1)
	{
		if (es_primo())
			suma += primo;
		num--;
	}
	return suma;
}

int es_primo(int nbr)
{
	if (nbr < 2)
		return 0;
	int i = 2;
	while(1 <= nbr / 2)
	{
		if (nbr % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int ft_atoi(char *str)
{
    int res = 0, sign = 1, i = 0;
    while (str[i] == ' ')
        i++;
    if (str[i] == '+' || str[i] == '-')
        if (str[i++] == '-')
            sign = -1;
    while (str[i] && str[i] >= 48 && str[i] <= 57)
    {
        res *= 10;
        res += str[i] - 48;
        i++;
    }
    res *= sign;
    return (res);
}

// CORREGIR ESTE CAGADERO
