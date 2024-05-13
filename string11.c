#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("enter the string ");
    fgets(str,sizeof str,stdin);
    int n = strlen(str);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] > str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    // Print the sorted string
    printf("The sorted string is: %s\n", str);

    return 0;
}