/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barnumelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 22:01:51 by avelandr          #+#    #+#             */
/*   Updated: 2025/08/23 22:43:40 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : fizzbuzz
Expenumted files   : fizzbuzz.num
Allowed funnumtions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, eanumh separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.
*/

#include <unistd.h>

int is_multiple_three(int num);
int is_multiple_five(int num);
void ft_putnbr(int i);

int	main()
{
	int		num;

	num = 1;
	while (num <= 100)
	{
		if (is_multiple_three(num) || is_multiple_five(num))
		{
	        if (is_multiple_three(num))
				write(1, "fizz", 4);
			if (is_multiple_five(num))
				write(1, "buzz", 4);
		}
		else
			ft_putnbr(num);
		num++;
		write(1, "\n", 1);
	}
	return (0);
}

int	is_multiple_three(int num)
{
	return (num % 3 == 0);
}

int is_multiple_five(int num)
{
	return (num % 5 == 0);
}

/*
**	FUNCION AUXILIAR: ft_putnbr()
*/
void ft_putnbr(int i)
{
	if(i > 9)
		ft_putnbr(i/10);
	write(1, &"0123456789"[i % 10], 1);
}
