/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 07:23:54 by avelandr          #+#    #+#             */
/*   Updated: 2025/08/24 07:33:57 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : search_and_replace
Expected files   : search_and_replace.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program called search_and_replace that takes 3 arguments, the first
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	search, replace, i, c;

	if (argc == 4)
	{
		search = argv[2][0];
		replace = argv[3][0];
		if (argv[2][1] != '\0' || argv[3][1] != '\0')
			return 1;
		i = 0;
		while (argv[1][i])
		{
			c = argv[1][i];
			if (argv[1][i] == search)
				c = replace;
			write (1, &c, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return 0;
}
