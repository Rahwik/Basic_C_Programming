#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 100
int main()
{
    char str[size];
    int i,vowel,conso;
    i=vowel=conso=0;
    printf("enter the string to check the vowels and consonanats");
    fgets(str,sizeof str,stdin);
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vowel++;
        }
        else{
            conso++;
        }
        i++;
    }
    printf("vowels=%d",vowel );
    printf("consonanat=%d",conso);
    return 0;
}