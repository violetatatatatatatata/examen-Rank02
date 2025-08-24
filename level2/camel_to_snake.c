/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 09:03:51 by avelandr          #+#    #+#             */
/*   Updated: 2025/08/24 12:21:39 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : camel_to_snake
Expected files   : camel_to_snake.c
Allowed functions: malloc, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in lowerCamelCase format
and converts it into a string in snake_case format.

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".
*/

#include <unistd.h>
#include <stdlib.h>

char *recorta_palabra(char *str);
int ft_strlen(char *str);
char *lowercase(char *str);
char *next_word(char *str);

int main(int argc, char **argv)
{
	char *snake;
	int	i, printed, len, miau;
	
	if (argc != 2)
		return 1;
	len = ft_strlen(next_word(argv[1]));
	// Asignar memoria para snake con la primera palabra del lowercase
	snake = (char *)malloc(len * sizeof(char));
	if (!snake)
	{
		free(snake);
		return 1;
	}
	// Recorrer el string entero
	miau = ft_strlen(argv[1]);
	printed = 0;
	while (printed < miau)
	{
		i = 0;
		// Si se encuentra un uppercase, realloc el tamanyo y escribir el '_'
		snake = next_word(argv[1]);
		// Imprimir dicha palabra :p
		while (snake[i])
		{
			write (1, &snake[i], 1);
			i++;
			printed++;
		}
		len = ft_strlen(next_word(argv[1]));
		// Reallocar la memoria de snake y anexar la barra baja solo si la siguiente palabra no es nula
		if (len > 0 && printed < miau)
		{
			// Modificar el array original y la posicion del puntero
			argv[1] = recorta_palabra(argv[1]);
			snake = (char *)realloc(snake, len * sizeof(char));
			write(1, "_", 1);
		}
	}
	free(snake);
	// *snake = NULL;
	return 0;
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	if (!*str)
		return 0;
	while (str[len])
		len++;
	return len;
}

char *lowercase(char *str)
{
	if (str[0] >= 'A' && str[0] <= 'Z')
		str[0] += 'a' - 'A';
	return (str);
}

char *next_word(char *str)
{
	char	*next_word;
	int		i, len;

	// Si es la primera palabra
	if (str[0] >= 'a' && str[0] <= 'z')
		len = 0;
	// Si no es la primera palabra
	else if (str[0] >= 'A' && str[0] <= 'Z')
		len = 1;
	// Calcula la longitud de la palabra hasta el siguiente uppercase
	while (str[len] && (str[len] >= 'a' && str[len] <= 'z'))
		len++;
	// Reserva memoria para dicha palabra
	next_word = (char *)malloc(sizeof(char) * len);
	if (!next_word)
	{
		free(next_word);
		return NULL;
	}
	// Copiar la palabra desde el string y devolver
	i = 0;
	while(str[i] && i < len)
	{
		next_word[i] = str[i];
		i++;
	}
	// Hacerlo lowercase :p
	next_word = lowercase(next_word);
	return (next_word);	
}

char *recorta_palabra(char *str)
{
	char    *recorte;
    int     len, i;

	i = 0;
	// Si es la primera palabra
    if (str[0] >= 'a' && str[0] <= 'z')
        len = 0;
    // Si no es la primera palabra
    else if (str[0] >= 'A' && str[0] <= 'Z')
        len = 1;
    // Calcula la longitud de la palabra hasta el siguiente uppercase
    while (str[len] && ((str[len] >= 'a' && str[len] <= 'z')))
		len++;
	// Asignar memoria a recorte
	recorte = (char *)malloc(sizeof(char) * (ft_strlen(str) - len));
	if (!recorte)
    {
        free(recorte);
        return NULL;
    }
	// Loop hasta copiar toda la palabra y extraerla
	while(len < ft_strlen(str))
	{
		recorte[i] = str[len];
		len++;
		i++;
	}
	return recorte;
}
