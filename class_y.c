#include<stdio.h>
int main()
{
    int a=-1,b=1,c,d;
    c=!a && b;
    d=!a || b;
    printf("%d%d%d%d",c,d,a,b);
    return 0;
}