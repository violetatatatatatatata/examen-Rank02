/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 23:24:57 by avelandr          #+#    #+#             */
/*   Updated: 2025/08/23 23:26:47 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);
*/

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return len;
}
