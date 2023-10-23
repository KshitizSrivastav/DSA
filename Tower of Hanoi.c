// Tower of Hanoi
#include <stdio.h>
int TOH(int n, char a,char b,char c)
{
if(n==1)
{
printf("Move disc %d from %c to %c\n",n,a,c);
return;
}
TOH(n-1,a,c,b);
printf("Move disc %d from %c to %c\n",n,a,c);
TOH(n-1,b,a,c);
}
int main()
{
char a,b,c;
TOH(3,'a','b','c');
return 0;
}
