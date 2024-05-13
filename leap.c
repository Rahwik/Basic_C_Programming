#include<stdio.h>
int main()
{
    int year;
    printf("enter the year to be checked");
    scanf("%d",&year);
    if(year%400==0||year%4==0 && year%100== 0)
    {
        printf("leap year");
    }
}