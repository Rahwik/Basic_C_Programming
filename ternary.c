#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)?((a>c)?printf("a is greatest"):printf("c is greatest")):((b>c)?printf(" b is greatest"):printf("c is greatest"));
    (a>b)?((a>c)?printf("a is greatest"):printf("c is greatest")):((c>b)?printf(" c is greatest"):printf(")
    return 0;
    }