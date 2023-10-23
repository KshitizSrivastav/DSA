// Structure 4
#include <stdio.h>
struct distance
{
    int feet;
    int inches;
}d[2];
int main()
{
    int i,feet=0,inches=0;
    for(i=0;i<2;i++)
    {
        printf("Enter the distance in feet:");
        scanf("%d",&d[i].feet);
        printf("Enter the distance in inches");
        scanf("%d",&d[i].inches);
    }
    for(i=0;i<2;i++)
    {
        feet=feet+d[i].feet;
        inches=inches+d[i].inches;
        while(inches>12)
        {
            inches=inches-12;
            feet++;
        }
    }
    printf("The sum of distance is %d feet and %d inches",feet,inches);
    return 0;
}
