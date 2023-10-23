// Structure 2
#include<stdio.h>
struct student_t_distribution
{
int roll;
char name[20];
int age;
float marks;
}s[5];
int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the details of student %d",i+1);
        scanf("%d %s %d %f",&s[i].roll,s[i].name,&s[i].age,&s[i].marks);
    }
    for(i=0;i<5;i++)
    {
        if(s[i].roll==1)
        {
            printf("The details are\n");
            printf("Roll \tName \tAge \tMarks\n");
            printf("%d \t%s \t%d \t%0.2f",s[i].roll,s[i].name,s[i].age,s[i].marks);

        }
    }
    return 0;
}

