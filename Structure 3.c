//Structure to store and print details of 15 students
#include <stdio.h>
struct student
{
int roll;
char name[20];
int age;
char add[30];
float marks;
}s[15];
int main()
{
int i;
for(i=0;i<15;i++)
{
printf("Enter the details of student %d",i+1);
scanf("%d %s %d %s %f",&s[i].roll,s[i].name,&s[i].age,s[i].add,&s[i].marks);
}
printf("The details of 15 students are:\n");
printf("Roll \tName \tAge \tAddress \tMarks");
for(i=0;i<15;i++)
{
printf("%d \t%s \t%d \t%s \t%0.2f",s[i].roll,s[i].name,s[i].age,s[i].add,s[i].marks);
printf("\n");
}
return 0;
}
