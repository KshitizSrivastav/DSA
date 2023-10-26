// Decimal to Binary conversion
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
    int i=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%2;
        push(d);
        n=n/2;
    }
    printf("The conversion in binary form is\n");
    display();


}
