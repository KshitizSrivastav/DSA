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
    int i=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%8;
        push(d);
        n=n/8;
    }
    printf("The conversion in octal form is\n");
    display();


}

