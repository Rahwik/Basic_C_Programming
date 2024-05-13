#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[50];
    int len;
    printf("Enter a string: ");
    fgets(str,sizeof str,stdin);
    len=strlen(str);
    for(int i=len;i>=0;i--)
    {
        printf("%c    ", str[i]);
    }
return 0;
}