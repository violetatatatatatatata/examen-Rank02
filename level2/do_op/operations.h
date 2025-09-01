/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:00:18 by avelandr          #+#    #+#             */
/*   Updated: 2025/09/01 13:25:48 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    set_operation(int num1, int num2, char op);
int	suma(int num1, int num2);
int	resta(int num1, int num2);
int	mult(int num1, int num2);
int	division(int num1, int num2);
int	modulo(int num1, int num2);

#endif
