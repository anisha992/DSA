#include <stdio.h>
#include <stdbool.h>

bool duplicate(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                return true;  //Duplicates found
            }
        }
    }
    return false; //No duplicates found
}
int main()
{
    int a[] = {3, 5, 6, 5};
    int n = sizeof(a) / sizeof(a[0]);
    if (duplicate(a, n))
    {
        printf("Duplicates found");
    }
    else
    {
        printf("No duplicates found");
    }
    return 0;
}