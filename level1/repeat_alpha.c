/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 23:37:43 by avelandr          #+#    #+#             */
/*   Updated: 2025/08/24 00:14:02 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i, j;
	int		repeat;

	i = 0;
	// CONTROLAR EL NUMERO DE ARGUMENTOS
	if (argc != 2)
	{
        write(1, "\n", 1);
        return (1);
    }
	// la palabra completa
	while(argv[1][i])
	{
		j = 0;
		repeat = 1;
		// SI EL CARACTER ES UNA MAYUSCULA
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			repeat = argv[1][i] - 'A' + 1;
		// SI ES UNA MINUSCULA
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			repeat = argv[1][i] - 'a' + 1;
		// SI ES UN CARACTER NORMAL, SOLO ESCRIBIRLO
		while (j < repeat)
		{
			write(1, &argv[1][i], 1);
			j++;
		}
		i++;
	}
}
