//999*999
#include<stdio.h>
int main(){
    int n,n1,flag=false,product,i,reaminder,reverse=0;
    printf("enter the value of n and n1");
    scanf("%d\n",&n);
    scanf("%d\n",&n1);
    while(flag==true){
        product=n*n1;
        while(product!=0){
            remainder =n%10;
            reverse=reverse*10+remainder;
            n/=10;
        }
        if(product==reverse){
            flag=true;
            prinf("largest three digit palindrome is =%d",product);
            break;
        }
        else{
            n2-=n2;
        }
    }
    return 0;
}