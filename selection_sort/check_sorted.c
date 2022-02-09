/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:09:24 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/02/09 18:14:58 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_sorted(int *num_list, int len)
{
	int	idx;

	idx = 0;
	while (idx < len)
	{
		if (num_list[idx] > num_list[idx + 1])
			return (0);
		idx++;
	}
	return (1);
}
