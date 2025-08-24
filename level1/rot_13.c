/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 01:45:16 by avelandr          #+#    #+#             */
/*   Updated: 2025/08/24 02:10:33 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.
*/

#include <unistd.h>

void ft_putnbr(int c);


// MAL he de verificar si esta en la primera mitad o en la segunda, de ser asi, se suma o resta 13
int	main(int argc, char **argv)
{
	int	i = 0;
	int c;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			c = argv[1][i];
			// LETRAS MAY Y MIN
			if ((c >= 'A' && c < 'Z') || (c >= 'a' && c < 'z'))
				if (c + 13 > ('Z'-'A'))
					c = c + 13 - ('Z'-'A');
			ft_putnbr(c);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
