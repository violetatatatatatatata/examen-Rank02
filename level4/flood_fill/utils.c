/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:10:24 by avelandr          #+#    #+#             */
/*   Updated: 2025/08/26 14:11:08 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood-fill.h"

void    print_tab(char **zone, t_point size)
{
    int i, j;

    i = 0;
    while (i < size.x)
    {
        j = 0;
        while (j < size.y)
        {
            write (1, &zone[i][j], 1);
            j++;
        }
        write (1, "\n", 1);
        i++;
    }
}

char **make_area(char **zone, t_point *size)
{
    char **area;
    int i;

    // Calcular el tamaño del área
    size->x = 0;
    while (zone[size->x])
        size->x++;
    size->y = strlen(zone[0]);

    // Asignar memoria para el area
    area = (char **)malloc(sizeof(char *) * (size->x + 1));
    if (!area)
        return NULL;
    
    i = 0;
    while (i < size->x)
    {
        area[i] = (char *)malloc(sizeof(char) * (size->y + 1));
        if (!area[i])
        {
            while(i > 0)
                free(area[--i]);
            free(area);
            return NULL;
        }
        strcpy(area[i], zone[i]); // Copia el contenido de la linea
        i++;
    }
    area[i] = NULL;
    return area;
}
