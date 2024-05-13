#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int rollno;
    float marks;
};
int main()
{
    struct student stud1={"rahul",29,12};
    printf("address of name =%u\n",stud1.name);
    printf("address of rollno =%u\n",&stud1.rollno);
    printf("address of the marks =%u\n",&stud1.marks);
}