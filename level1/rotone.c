/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 07:04:09 by avelandr          #+#    #+#             */
/*   Updated: 2025/08/24 07:23:15 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	i;

	if (argc == 2)
	{
		i = 0;
		while(argv[1][i])
		{
			c = argv[1][i];
			if (c == 'z' || c == 'Z')
                c = 'a';
			if ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
				c += 1;
			write (1, &c, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
