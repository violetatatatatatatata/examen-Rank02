/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:52:09 by avelandr          #+#    #+#             */
/*   Updated: 2025/08/27 16:41:19 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
#define LIST_H

/*
	Def de nodo en una linkedlist
*/
typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}			t_list;

#endif
