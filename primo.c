#include<stdio.h>  
int main(){    
int n=0,i,m=0,flag=0,j;   
for(j=1;i<=6000;i++)
{
    m=i/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        }
        if(flag==0){
          n=6000%i;
          if(n<i)
          {
            n=i;
          }
        }
}
printf("largest prime factor is%d",n);
return 0;
}

