/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 20:37:33 by avelandr          #+#    #+#             */
/*   Updated: 2025/08/23 21:43:29 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/

#include <unistd.h>

int	main(int argc,char **argv)
{
	char	c;
	int		len;

	// El numero de argumentos ha de ser especificamente 2
    if(argc != 2) {
        return (1);
	}
	len = 0;
	// Proteger de white spaces
	while (argv[1][len] == ' ' || argv[1][len] == '\t')
		len++;
	// Imprimir hasta conseguir white space o null
	while(argv[1][len] && (argv[1][len] != ' '))
	{
		c = argv[1][len];
		write(1, &c, 1);
		len++;
	}
	// Salto de linea
	write(1, "\n", 1);
	return (0);
}

