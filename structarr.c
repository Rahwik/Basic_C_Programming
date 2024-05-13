#include<stdio.h>
#include <string.h>
struct student {
    char name[20];
    int rollno;
    float marks;
};
int main()
{
    int i;
    struct student studarr[4];
    for(i=0;i<4;i++)
    {
    printf("enter the value of names, rollno and marks");
    scanf("%s %d %f",studarr[i].name,&studarr[i].rollno,&studarr[i].marks);
    }
    for(i=0;i<4;i++){
    printf("%s %d %f\n",studarr[i].name,studarr[i].rollno,studarr[i].marks);
    }
}