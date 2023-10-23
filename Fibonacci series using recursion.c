// Fionacci Series using recursion
#include<stdio.h>
int fibo(int n)
{
    if(n==1 || n==2)
        return n-1;
    else
        return fibo(n-1)+fibo(n-2);
}
int main()
{
    int i,n,f;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=fibo(i);
        printf("%d \t",f);
    }
    return 0;
}
