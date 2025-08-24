/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 07:35:36 by avelandr          #+#    #+#             */
/*   Updated: 2025/08/24 07:48:16 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ulstr
Expected files   : ulstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.

You must display the result followed by a '\n'.

If the number of arguments is not 1, the program displays '\n'.
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c, i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			c = argv[1][i];
			if (c >= 'a' && c <= 'z')
				c -= 'a'- 'A';
			else if (c >= 'A' && c <= 'Z')
				c += 'a'- 'A';
			write (1, &c, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return 0;
}
