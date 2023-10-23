#include <stdio.h>
int main()
{
    struct student{
    int roll;
    char name[20];
    int age;
    char address[20];
    }s[50];
    int n,rollno,c=0;
    printf("Enter the number of students:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the roll number:");
        scanf("%d",&s[i].roll);
        printf("Enter the name:");
        scanf("%s",s[i].name);
        printf("Enter the age");
        scanf("%d",&s[i].age);
        printf("Enter the address");
        scanf("%s",s[i].address);
    }
    printf("To display the details of students with even roll");
    for(int i=0;i<n;i++)
    {
        if(s[i].roll%2==0)
        {
            printf("%d\t",s[i].roll);
            printf("%s\t",s[i].name);
            printf("%d\t",s[i].age);
            printf("%s\t",s[i].address);
        }
        printf("\n");
    }
    printf("Enter the roll number to search:");
    scanf("%d",&rollno);
    for(int i=0;i<n;i++)
    {
        if(s[i].roll==rollno)
        {
            printf("%s\t",s[i].name);
            printf("%d\t",s[i].age);
            printf("%s\t",s[i].address);
        }
        c=1;
    }
    if(c==0)
        printf("Roll number not found");
    return 0;
}
