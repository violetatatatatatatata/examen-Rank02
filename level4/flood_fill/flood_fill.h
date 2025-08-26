/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:46:05 by avelandr          #+#    #+#             */
/*   Updated: 2025/08/26 14:09:44 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOD_FILL_H
#define FLOOD_FILL_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h> // Para strlen

typedef struct s_point
{
    int x;
    int y;
}              t_point;

// Prototipos de las funciones
int is_border(t_point size, t_point p);
void print_tab(char **zone, t_point size);
// char **make_area(char **zone, t_point *size);
void fill(char **area, t_point size, t_point begin, char target);
void flood_fill(char **area, t_point size, t_point begin);

#endif
