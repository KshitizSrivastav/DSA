//Address Calculation of 2D array
#include<stdio.h>
int main()
{
    int arr[20][20];

    int i=5,j=7;
    int *x;
        printf("%u\n",&arr[i][j]); //using address operator

    *x=arr[0]+ sizeof(int)((i-0)(19-0+1)+(j-0));
    printf("%u",x);    //using array index formula
}
