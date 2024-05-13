#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter the sentence");
    fgets(str,sizeof str,stdin);
    int word =0,i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
        {
            word++;
                    }
                    i++;
    }
    printf("number of words in the sentence =%d",word);
    return 0;
}