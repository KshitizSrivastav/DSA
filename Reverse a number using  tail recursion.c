//Reverse a number using Recursion
#include <stdio.h>
int reverse(int n,  int rev)
{
if(n==0)
{
return rev;
}
return reverse (n/10,((rev*10)+(n%10)));
}
int main()
{
int n;
int rev=0;
printf("Enter the number");
scanf("%d",&n);
printf("The reverse of number is %d",reverse(n,rev));
return 0;
}
