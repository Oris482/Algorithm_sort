/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:00:34 by jaesjeon          #+#    #+#             */
/*   Updated: 2022/02/09 20:37:38 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str);
void	quick_sort(int *num_list, int len);
int		check_sorted(int *num_list, int len);

int	main(int argc, char *argv[])
{
	int	*num_list;
	int	len;
	int	idx;

	len = argc - 1;
	idx = 0;
	num_list = (int *)malloc(sizeof(int) * (argc - 1));
	while (--argc > 0)
	{
		num_list[idx] = ft_atoi(argv[idx + 1]);
		idx++;
	}
	printf("Original number list\n");
	printf("num list count = %d\n", len);
	printf(">>>>>>>>>>>>>>>>>>>\n");
	while (argc < idx)
	{
		printf("%d ", num_list[argc++]);
	}
	printf("\n");
	printf("<<<<<<<<<<<<<<<<<<<\n");
	quick_sort(num_list, len);
	printf("sorted number list\n");
	printf(">>>>>>>>>>>>>>>>>>>\n");
	argc = 0;
	while (argc < idx)
	{
		printf("%d ", num_list[argc++]);
	}
	printf("\n");
	printf("<<<<<<<<<<<<<<<<<<<\n");
	printf("*******************\n");
	printf("is sorted? = ");
	if (check_sorted(num_list, len))
		printf("YES!!\n");
	else
		printf("NO...\n");
	return (0);
}
