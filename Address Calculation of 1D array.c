//Address Calculation of 1D array
#include <stdio.h>
int main()
{
    int arr[20];

    int i=5;
    printf("%u\n",&arr[i]); //using address operator

    int *x=arr+(i-0);
    printf("%u",x);    //usind array index formula
}
