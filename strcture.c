#include <stdio.h>
#include <string.h>
struct student{
    char name[20];
    int rollno;
    float marks;
};
int main()
{
    struct student stu1={"rahul",39,98};
    struct student stu2,stu3;
    strcpy(stu2.name,"hammy");
    stu2.rollno=36;
    stu2.marks=99;
    printf("enter the name,roll no and marks of stu3");
    scanf("%s%d%f",stu3.name,&stu3.rollno,&stu3.marks);
    printf("stul : %s %d %.2f\n",stu1.name,stu1.rollno,stu1.marks);
    printf("stu2: %s %d %.2f\n", stu2. name, stu2. rollno,stu2.marks) ;
    printf("stu3 : %s %d %.2f\n", stu3 .name, stu3. rollno,stu3.marks);
}