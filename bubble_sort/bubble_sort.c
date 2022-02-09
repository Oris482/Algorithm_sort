/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:15:22 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/02/09 19:32:46 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	bubble_sort(int *num_list, int len)
{
	int primary_i;
	int	sub_i;
	int	temp;
	int	compare_count;
	int	swap_count;

	primary_i = 1;
	compare_count = 0;
	swap_count = 0;
	while (primary_i < len)
	{
		sub_i = 0;
		while (sub_i < len - primary_i)
		{
			if (num_list[sub_i] > num_list[sub_i + 1])
			{
				temp = num_list[sub_i];
				num_list[sub_i] = num_list[sub_i + 1];
				num_list[sub_i + 1] = temp;
				swap_count++;
			}
			sub_i++;
			compare_count++;
		}
		primary_i++;
	}
	printf("compare count = %d\n", compare_count);
	printf("swap count = %d\n", swap_count);
}
