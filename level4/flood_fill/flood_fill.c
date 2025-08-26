/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:56:01 by avelandr          #+#    #+#             */
/*   Updated: 2025/08/26 14:15:31 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"
// #include "test_functions"

int	is_border(t_point size, t_point p)
{
	if (p.x >= size.x || p.y >= size.y || p.x < 0 || p.y < 0
		|| area[p.x][p.y] != target)
		return 1;
	return 0;
}

// DFS
void	fill(char **area, t_point size, t_point begin, char target)
{
	// actual border or already painted
	if (is_border(size, begin) || area[begin.x][begin.y] != target)
		return;
	area[begin.x][begin.y] = '1';

	// Rellenamos los 4 puntos adyacentes
    t_point up = {begin.x - 1, begin.y};
    fill(area, size, up, target);
    
    t_point down = {begin.x + 1, begin.y};
    fill(area, size, down, target);
    
    t_point left = {begin.x, begin.y - 1};
    fill(area, size, left, target);
    
    t_point right = {begin.x, begin.y + 1};
    fill(area, size, right, target);
}

void	flood_fill(char **area, t_point size, t_point begin)
{
	char target = area[begin.x][begin.y];
	fill(area, size, begin, target);
}
