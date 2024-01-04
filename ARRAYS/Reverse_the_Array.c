#include <stdio.h>
int main()
{
    int a[] = {4, 6, 7, 12, 45, 78, 89};
    int n = sizeof(a) / sizeof(a[0]);
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    printf("The reversed array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
    return 0;
}