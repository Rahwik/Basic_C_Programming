#include <stdio.h>  
#include<string.h>  
int main()  
{  
   char str1[50]; 
   char str2[50];  
   int value;  
   
   printf("Enter the first string : ");  
   fgets(str1,sizeof str1,stdin);
   printf("Enter the second string : ");  
   fgets(str2,sizeof str2,stdin);
   value = strcmp(str1,str2);  
   if(value == 0)  
   printf("strings are same");  
   else  
   printf("strings are not same");  
   return 0;  
}  

