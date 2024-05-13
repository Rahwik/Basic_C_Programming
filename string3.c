#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[50];
    int i=0;
    printf("enter the string\n");
    fgets(str,sizeof str,stdin);
    printf("the string is %s \n",str);
    while(str[i]!='\0')
    {
        printf("%c\t",str[i]);
        i++;
    }
    return 0;
}