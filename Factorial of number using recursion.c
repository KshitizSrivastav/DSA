// Factorial of number using tail recursion
#include <stdio.h>
int fact(int n,int f)
{
if(n==1)
{return f;}
return fact(n-1,f*n);
}
int main()
{
int n,f=1;
printf("Enter the number:");
scanf("%d",&n);
printf("The factorial of number is %d",fact(n,f));
return 0;
}
