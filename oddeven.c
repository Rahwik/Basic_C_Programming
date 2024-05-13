#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("its a even number");
    }
    if(a%2 !=0)
    {
        printf("its a odd number ");
    }
    return 0;
}