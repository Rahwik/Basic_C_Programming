#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 100
int main()
{
 char str[size];
 char str2[size];
 printf("enter the string to get copied ");
 fgets(str,sizeof str,stdin);
 strcpy(str2,str);
 puts(str2);
 return 0;
}