/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puto.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:41:27 by avelandr          #+#    #+#             */
/*   Updated: 2025/08/27 15:07:28 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int is_space(char c);
char    **ft_split(char *str);

char **ft_split(char *str)
{
    char **split;
    int len;
    int i = 0;
    int word_index = 0;
    int nwords;

    // 1. Contar el número de palabras para saber el tamaño del array
    nwords = count_words(str);
    // 2. Asignar memoria para el array de punteros (+1 para el NULL final)
    split = (char **)malloc(sizeof(char *) * (nwords + 1));
    if (!split)
        return (NULL);
    // 3. Iterar sobre la cadena original
    while (str[i])
    {
        // Saltar los espacios
        while (str[i] && is_space(str[i]))
            i++;
        // Si no es el final de la cadena, es el inicio de una palabra
        if (str[i])
        {
            len = 0;
            // Medir la longitud de la palabra
            while (str[i + len] && !is_space(str[i + len]))
                len++;
            // 4. Copiar la palabra y guardar el puntero en el array !!!
            split[word_index] = copy_word(&str[i], len);
            if (!split[word_index])
            {
                // Manejo de error: liberar la memoria de las palabras ya copiadas !!!
                while (word_index > 0)
                    free(split[--word_index]);
                free(split);
                return (NULL);
            }
            word_index++;
            i += len;
        }
    }
    // 5. Añadir el terminador nulo para el array de punteros
    split[word_index] = NULL;
    return (split);
}

int	ft_wcount(char *str)
{
	int	count = 0;
	int i = 0;

	while(str[i])
	{
		// Saltarse inputs vacios o con solo espacios
		while (str[i] && is_space(str[i]))
			i++;
		// cuenta las palabras saltandose los espacios
		if (str[i] && !is_space(str[i]))
		{
			count++;
			while(str[i] && !is_space(str[i]))
				i++;
		}
	}
	return (count);
}

int is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t'/* || c == '\0'*/);
}

char *strncpy(char *src, int len)
{
	char	*word;
	int		count = 0;

	// asignar memoria para la palaba y el terminador nulo
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	// copiar
	while (count < len)
	{
		word[count] = src[count];
		count++;
	}
	// terminador nulo
	word[count] = '\0';
	return (word);
}

int	main(int argc, char **argv)
{
	char **a;
	int i = 0;

	if (argc == 2)
	{
		a = ft_split(argv[1]);
		while(a[i])
		{
			printf("%s\n", a[i]);
			free(a[i]);
		}
	}
	return 0;
}
