// Sum of digits using Recursion
#include <stdio.h>
int sum(int n , int s)
{
if (n==0)
return s;
return sum(n/10,s+(n%10));
}
int main()
{
int s=0,n;
printf("Enter the number");
scanf("%d",&n);
printf("The sum of digit is %d",sum(n,s));
return 0;
}
