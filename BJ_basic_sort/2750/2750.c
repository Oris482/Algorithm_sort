#include <stdio.h>
#include <stdlib.h>

static void quick_sort(int *num_list, int start, int end)
{
    int primary_idx = start + 1;
    int sub_idx = end;
    int temp;

    if (start >= end)
        return ;
    while ((num_list[start] > num_list[primary_idx]) && primary_idx <= end)
        primary_idx++;
    while ((num_list[start] < num_list[sub_idx]) && sub_idx > start)
        sub_idx--;
    if (sub_idx < primary_idx)
    {
        temp = num_list[start];
        num_list[start] = num_list[sub_idx];
        num_list[sub_idx] = temp;
        quick_sort(num_list, start, sub_idx - 1);
        quick_sort(num_list, sub_idx + 1, end);
    }
    else
    {
        temp = num_list[primary_idx];
        num_list[primary_idx] = num_list[sub_idx];
        num_list[sub_idx] = temp;
        quick_sort(num_list, start, end);
    }
}

int main(void)
{
    int len;
    int *num_list;
    int idx = 0;

    scanf("%d", &len);
    num_list = (int *)malloc(sizeof(int) * len);
    if (num_list == NULL)
        return (0);
    while (idx < len)
        scanf("%d", &num_list[idx++]);
    quick_sort(num_list, 0, len - 1);
    idx = 0;
    while (idx < len)
        printf("%d\n", num_list[idx++]);
    return (0);
}