/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:16:52 by avelandr          #+#    #+#             */
/*   Updated: 2025/09/01 13:25:44 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

int     suma(int num1, int num2)
{
	return (num1 + num2);
}

int     resta(int num1, int num2)
{
	return (num1 - num2);
}

int     mult(int num1, int num2)
{
	return (num1 * num2);
}

int     division(int num1, int num2)
{
	return (num1 / num2);
}

int     modulo(int num1, int num2)
{
	return (num1 % num2);
}
