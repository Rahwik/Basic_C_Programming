#include <stdio.h>
#include <string.h>
struct student{
    char name[20];
    int rollno;
    int submarks[4];
};
int main()
{
    int i;
    struct student stu1;
    printf("enter the name:");
    scanf("%s",&stu1.name);
    printf("enter the roll no:");
    scanf("%d",&stu1.rollno);
    for(i=0;i<4;i++)
    {
        printf("enter the marks of subject %d",i+1);
        scanf("%d",&stu1.submarks[i]);
    }
    printf("student details are \n");
    printf("Name: %s\n Rollno:%d\n marks:",stu1.name,stu1.rollno);
    for(i=0;i<4;i++)
    {
        printf("%d",stu1.submarks[i]);
    }

}