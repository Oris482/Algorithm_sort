/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:40:44 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/02/15 21:56:06 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	quick_sort(int *num_list, int start, int end)
{
	int	compare_count = 0;
	int	swap_count = 0;
	int	primary_idx = start + 1;
	int	sub_idx = end;
	int	pivot_idx = start;
	int	tmp;

	if (start >= end)
		return ;
	while (num_list[pivot_idx] < num_list[primary_idx])
		primary_idx++;
	while ((num_list[pivot_idx] > num_list[sub_idx]) && (sub_idx > pivot_idx))
		sub_idx--;
	if (sub_idx <= primary_idx)
	{
		tmp = num_list[pivot_idx];
		num_list[pivot_idx] = num_list[sub_idx];
		num_list[sub_idx] = tmp;
		quick_sort(num_list, pivot_idx, sub_idx - 1);
	}
	else
	{
		tmp = num_list[primary_idx];
		num_list[primary_idx] = num_list[sub_idx];
		num_list[sub_idx] = tmp;
		quick_sort(num_list, start, end);
	}
}
