// Decimal to Octal conversion
#include <stdio.h>
int top=-1,n,stack[50],x,d;
void push(int x)
{
        top=top+1;
        stack[top]=x;

}

void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d \t ",stack[i]);
    }
}
int main()
{
    int i=0,b;
    printf("Enter the base:");
    scanf("%d",&b);
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%b;
        push(d);
        n=n/b;
    }
    printf("The conversion in any base form is\n");
    display();


}

