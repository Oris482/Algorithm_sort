/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:49:27 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/02/09 19:59:58 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	insertion_sort(int *num_list, int len)
{
	int primary_i;
	int	sub_i;
	int temp;
	int compare_count;
	int swap_count;

	primary_i = 0;
	compare_count = 0;
	swap_count = 0;
	while (primary_i < len -1)
	{
		sub_i = primary_i;
		while (sub_i >= 0)
		{
			compare_count++;
			if (num_list[sub_i] > num_list[sub_i + 1])
			{
				temp = num_list[sub_i];
				num_list[sub_i] = num_list[sub_i + 1];
				num_list[sub_i + 1] = temp;
				swap_count++;
			}
			else
				break ;
			sub_i--;
		}
		primary_i++;
	}
	printf("compare count = %d\n", compare_count);
	printf("swap count = %d\n", swap_count);
}
