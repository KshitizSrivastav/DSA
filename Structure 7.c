//Structure 7
#include <stdio.h>
struct marks
{
int roll;
char name[20];
float chem;
float maths;
float phy;
}s[5];
int main()
{
int i;
for(i=0;i<5;i++)
{
printf("Enter the details of student %d",i+1);
scanf("%d %s %f %f %f",&s[i].roll,s[i].name,&s[i].chem,&s[i].maths,&s[i].phy);
}
float perc[5];
for(i=0;i<5;i++)
{
    perc[i]=((s[i].maths+s[i].chem+s[i].phy)/3);
}
printf("The details of student are:\n");
printf("Name \tPercentage\n");
for(i=0;i<5;i++)
{
    printf("%s \t%0.2f",s[i].name,perc[i]);
    printf("\n");
}
return 0;
}
