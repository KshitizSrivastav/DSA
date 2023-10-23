// Input the details of student
#include <stdio.h>
struct student
{
int roll;
char name[20];
float m1;
float m2;
float m3;
float m4;
float m5;
float m6;
}s;
int main()
{
float perc;
printf("Enter the details of the student");
scanf("%d %s %f %f %f %f %f %f",&s.roll,s.name,&s.m1,&s.m2,&s.m3,&s.m4,&s.m5,&s.m6);
perc=(s.m1+s.m2+s.m3+s.m4+s.m5+s.m6)/6*100;
if(perc>=95)
printf("The student is eligible for admission");
else
printf("The student is not eligible");
return 0;
}
