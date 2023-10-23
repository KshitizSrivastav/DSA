// Structure 5
#include<stdio.h>
struct complex
{
    int real;
    int imag;
}c[2];
int main()
{
    int i,r=0,im=0;
    for(i=0;i<2;i++)
    {
        printf("Enter the real part");
        scanf("%d",&c[i].real);
        printf("Enter the imaginary part");
        scanf("%d",&c[i].imag);
        r=r+c[i].real;
        im=im+c[i].imag;
    }
    printf("The sum of two complex number is:\n");
    printf("%d + %dj",r,im);
    return 0;
}
