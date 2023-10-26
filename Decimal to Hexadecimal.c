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
        if(stack[i]<10)
            printf("%d \t ",stack[i]);
        else
        {
            d=stack[i];
            switch(d)
            {
            case 10:
                printf("A \t ");
                break;
            case 11:
                printf("B \t ");
                break;
            case 12:
                printf("C \t ");
                break;
            case 13:
                printf("D \t ");
                break;
            case 14:
                printf("E \t ");
                break;
            case 15:
                printf("F \t ");
                break;
            default:
                printf("Error");
            }
        }
    }
}
int main()
{
    int i=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%16;
        push(d);
        n=n/16;
    }
    printf("The conversion in hexadecimal form is\n");
    display();


}
