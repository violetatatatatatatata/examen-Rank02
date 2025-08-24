/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 22:45:16 by avelandr          #+#    #+#             */
/*   Updated: 2025/08/23 23:16:30 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_putstr
Expected files   : ft_putstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	ft_putstr(char *str);
*/

#include <unistd.h>

void    ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while(str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

/*
int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	ft_putstr(argv[1]);
	return (0);
}
*/
