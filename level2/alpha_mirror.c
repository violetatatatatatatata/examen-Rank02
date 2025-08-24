/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 08:29:19 by avelandr          #+#    #+#             */
/*   Updated: 2025/08/24 09:02:17 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the pos alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i, c;
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			c = argv[1][i];
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				c = ('Z' - 'A') - (argv[1][i] - 'a') + 'a';
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				c = ('Z' - 'A') - (argv[1][i] - 'A') + 'A';
			write(1, &c,1);
			i++;
		}
	}
	write(1, "\n",1);
	return 0;
}
