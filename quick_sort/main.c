/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:00:34 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/02/16 21:18:32 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "color.h"

int		ft_atoi(const char *str);
void	quick_sort(int *num_list, int start, int end, int *compare_count, int *swap_count);
int		check_sorted(int *num_list, int len);

int	main(int argc, char *argv[])
{
	int	*num_list;
	int	len;
	int	idx;
	int	compare_count = 0;
	int	swap_count = 0;

	len = argc - 1;
	idx = 0;
	num_list = (int *)malloc(sizeof(int) * (argc - 1));
	while (--argc > 0)
	{
		num_list[idx] = ft_atoi(argv[idx + 1]);
		idx++;
	}
	printf("%sOriginal number list%s\n", BLUE_FG, COLOR_RESET);
	printf("%snum list count = %d%s\n", BLUEGREEN_FG, len, COLOR_RESET);
	printf(">>>>>>>>>>>>>>>>>>>\n");
	while (argc < idx)
	{
		printf("%d ", num_list[argc++]);
	}
	printf("\n");
	printf("<<<<<<<<<<<<<<<<<<<\n");
	quick_sort(num_list, 0, len - 1, &compare_count, &swap_count);
	printf("%ssorted number list%s\n", BLUE_FG, COLOR_RESET);
	printf(">>>>>>>>>>>>>>>>>>>\n");
	argc = 0;
	while (argc < idx)
	{
		printf("%d ", num_list[argc++]);
	}
	printf("\n");
	printf("<<<<<<<<<<<<<<<<<<<\n");
	printf("%scompare count = %d%s\n", BLUEGREEN_FG, compare_count, COLOR_RESET);
	printf("%sswap count = %d%s\n", BLUEGREEN_FG, swap_count, COLOR_RESET);
	printf("is sorted? = ");
	if (check_sorted(num_list, len))
		printf("%sYES!!%s\n", GREEN_FG, COLOR_RESET);
	else
		printf("%sNO...%s\n", RED_FG, COLOR_RESET);
	return (0);
}
