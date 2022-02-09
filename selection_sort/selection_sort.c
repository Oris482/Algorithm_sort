/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:49:23 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/02/09 18:53:35 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	selection_sort(int *num_list, int len)
{
	int		compare_count;
	int		swap_count;
	int		primary_i;
	int		sub_i;
	int		tmp;
	int		min;
	int		min_idx;

	compare_count = 0;
	swap_count = 0;
	primary_i = 0;
	while (primary_i < len)
	{
		min = 2147483647;
		sub_i = primary_i;
		while (sub_i < len)
		{
			if (num_list[sub_i] < min)
			{
				min = num_list[sub_i];
				min_idx = sub_i;
			}
			compare_count++;
			sub_i++;
		}
		if (primary_i != min_idx)
		{
			tmp = num_list[primary_i];
			num_list[primary_i] = num_list[min_idx];
			num_list[min_idx] = tmp;
			swap_count++;
		}
		primary_i++;
	}
	printf("compare count = %d\n", compare_count);
	printf("swap count = %d\n", swap_count);
}
