/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:17:02 by avelandr          #+#    #+#             */
/*   Updated: 2025/08/26 14:29:47 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void search_primos(int num);

int	main(int argc, char **argv)
{
	int	num;

	if (argc == 2)
	{
		num = atoi(argv[1]);
		search_primos(num);
	}
	printf("\n");
	return 0;
}

void search_primos(int num)
{
	int	primo = 2;
	while (primo <= num)
	{
		if (num % primo == 0)
		{
			printf("%d", primo);
			if (primo != num)
				printf("*");
			num = num / primo;		// ESTA LINEA ES IMPORTANTE
		}
		else
			primo++;
	}
}
