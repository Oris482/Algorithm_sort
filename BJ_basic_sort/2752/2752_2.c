#include <stdio.h>

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

int main(void)
{
    int num_list[3];
    int idx = 0;

    while (idx < 3)
        scanf("%d", &num_list[idx++]);
    selection_sort(&num_list[0], 3);
    idx = 0;
    while (idx <3)
    {
        printf("%d", num_list[idx]);
        if (idx != 2)
            printf(" ");
        else
            printf("\n");
        idx++;
    }
}