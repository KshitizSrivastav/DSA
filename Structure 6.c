// Structure 6
#include <stdio.h>
struct time
{
    int hour;
    int min;
    int sec;
}t[2];
int main()
{
    int i,h=0,m=0,s=0;
    for(i=0;i<2;i++)
    {
        printf("Enter the time in hr min and sec");
        scanf("%d %d %d",&t[i].hour,&t[i].min,&t[i].sec);
    }
    for(i=0;i<2;i++)
    {
        h=h+t[i].hour;
        m=m+t[i].min;
        s=s+t[i].sec;
    }
    while(s>60)
    {
        s=s-60;
        m++;
    }
    while(m>60)
    {
        m=m-60;
        h++;
    }
    printf("The time is %d hr %d mins %d secs",h,m,s);
    return 0;
}
