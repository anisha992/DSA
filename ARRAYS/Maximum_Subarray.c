#include <stdio.h>
int main()
{
    int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int current_sum = 0;
    int max_sum = 0;
    int start_index=0;
    int end_index=0;
    int temp_start_index=0;
    for (int i = 0; i < n; i++)
    {
        current_sum=current_sum+a[i];
        if (current_sum>max_sum)
        {
            max_sum=current_sum;
            start_index=temp_start_index;
            end_index=i;
        }
        if (current_sum<0)
        {
            current_sum=0;
            temp_start_index=i+1;
        }
    }
    printf("Maximum subarray sum %d\n", max_sum);
    for (int i = start_index; i <= end_index; i++)
    {
        printf("%d ", a[i]);
    }


    return 0;
}