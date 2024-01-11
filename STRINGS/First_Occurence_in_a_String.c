#include <stdio.h>

int str(char string1[], int n, char string2[], int m)
{
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (string1[i + j] != string2[j])
            {
                break;
            }
        }
        if (j == m)
        {
            return i; //first occurence index in a String
        }
    }
    return -1;
}

int main()
{
    char string1[] = "butsad";
    char string2[] = "sad";
    int n = sizeof(string1) / sizeof(string1[0]) - 1;  
    int m = sizeof(string2) / sizeof(string2[0])- 1;
    int result = str(string1, n, string2, m);
    if (result != -1)
        printf("At index %d", result);
    else
        printf("Result not found");
    return 0;
}