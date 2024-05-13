#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    int carry = 0;
    while (b != 0)
    {
    carry = a & b;
    a = a ^ b;
    b = carry << 1;
  }
  printf("sum of the two numbers =%d",a);
  return 0;
}