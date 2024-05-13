#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;
    char arr[100][100];

    printf("Enter the number of strings: ");
    scanf(" %d ", &n);

    // Input strings from user
    for (i = 0; i < n; i++)
    {
        printf("Enter string %d: ", i + 1);
        scanf(" %s ", arr[i]);
    }

    // Sort the strings in ascending order
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(arr[i], arr[j]) > 0)
            {
                char temp[100];
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }

    // Print the sorted strings
    printf("The sorted strings are: \n");
    for (i = 0; i < n; i++)
    {
        printf(" %s \n", arr[i]);
    }

    return 0;
}