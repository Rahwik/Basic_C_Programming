#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count[26], i, j, max = 0;

    printf("Enter the string: ");
    fgets(str,sizeof str,stdin);

    for (i = 0; i < 26; i++)
    {
        count[i] = 0;
    }

    for (i = 0; i < strlen(str); i++)
    {
        count[str[i] - 'a']++;
    }

    for (i = 0; i < 26; i++) 
    {
        if (max < count[i]) 
        {
            max = count[i];
            j = i;
        }
    }

    printf("The character '%c' has occurred the maximum number of times i.e. %d times", j + 'a', max);

    return 0;
}