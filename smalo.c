#include<stdioo.h>
int main(){
    int n=20,flag=false,num=0,i;
    while(flag==false){
        for(i=1;i<=20;i++){
            if(20%i==0){
                num+=1;
            }
            if(num ==20){
                printf("small number divisible by all 20 =%d",n);
                flag==true;
                break;
            }
            else{
                n=n++;
            }
         }
    }
    return 0;
}
//print the sum 0f 10 numbers?  
