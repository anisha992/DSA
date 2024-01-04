#include <stdio.h>

void bubblesort(int a[], int n)
{
    int flag;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}
int main()
{
    int a[] = {25, 8, 4, 9, 7, 89, 45, 67};
    int n = sizeof(a) / sizeof(a[0]);
    bubblesort(a, n); //calling sorting function
    printf("Maximum element is %d\n", a[n - 1]);
    printf("Minimum element is %d", a[0]);
    return 0;
}