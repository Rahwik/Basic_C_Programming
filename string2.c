#include<stdio.h>
#include<stdlib.h>
int main()
{
    char strin[50];
    int i=0;
    printf("enter the string");
    //scanf("%S",strin);
   //printf("sting =%S \n",strin);
    fgets(strin, sizeof strin, stdin);
    while(strin[i]!='\0')
    {
        i++;
    } 
    printf("length of the string =%d", i-1);
    return 0;
}