#include <unistd.h>
#include <stdlib.h>

static int ft_atoi(char *str)
{
    int num;
    int sign;

    num = 0;
    sign = 1;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        num = num * 10 + (*str - '0');
        str++;
    }
    return (num * sign);
}

static void ft_putchar(char c)
{
    write(1, &c, 1);
}

static void    ft_putnum(int num)
{
    if (num < 0)
    {
        write (1, "-", 1);
        num *= (-1);
    }
    if (num < 10)
        ft_putchar(num + '0');
    else
    {
        ft_putnum(num / 10);
        ft_putnum(num % 10);
    }
}

static void selection_sort(int *num_list, int len)
{
    int primary_idx;
    int sub_idx;
    int temp;
    int min;
    int min_idx;

    primary_idx = 0;
    sub_idx = 0;
    while (primary_idx < len)
    {
        sub_idx = primary_idx;
        min_idx = primary_idx;
        min = 1000001;
        while (sub_idx < len)
        {
            if (num_list[sub_idx] < min)
            {
                min = num_list[sub_idx];
                min_idx = sub_idx;
            }
            sub_idx++;
        }
        if (primary_idx != min_idx)
        {
            temp = num_list[primary_idx];
            num_list[primary_idx] = num_list[min_idx];
            num_list[min_idx] = temp;
        }
        primary_idx++;
    }
}

int main(int argc, char *argv[])
{
    int *num_list;
    int idx;

    if (argc != 4)
        return (0);
    num_list = (int *)malloc(sizeof(int) * (argc - 1));
    if (num_list == NULL)
        return (0);
    idx = -1;
    while (++idx < argc - 1)
        num_list[idx] = ft_atoi(argv[idx + 1]);
    selection_sort(num_list, argc - 1);
    idx = -1;
    while (++idx < argc - 1)
    {
        ft_putnum(num_list[idx]);
        if (idx != argc - 2)
            write(1, " ", 1);
    }
    free(num_list);
    return (0);
}