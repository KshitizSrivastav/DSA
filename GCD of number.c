// GCD of number
#include <stdio.h>
int gcd(int a, int b)
{
if(a%b==0)
{
    return 1;
}
return gcd(b,(a%b));
}
int main()
{
int a,b;
printf("Enter the number 1");
scanf("%d",&a);
printf("Enter the number 2");
scanf("%d",&b);
printf("The gcd of the number is %d",gcd(a,b));
return 0;
}
