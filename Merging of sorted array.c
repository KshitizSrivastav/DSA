// Merging two sorted arrays
#include <stdio.h>
int main()
{
int m,n,i=0,j=0,k=0,l,o;
printf("Enter the no of elements in Array 1");
scanf("%d",&m);
printf("Enter the no of elements in Array 2");
scanf("%d",&n);
int a[n],b[m],c[50];
printf("Enter the elements in array 1");
for(l=0;l<n;l++)
{
scanf("%d",&a[l]);
}
printf("Enter the elements in array 2");
for(o=0;o<m;o++)
{
scanf("%d",&b[o]);
}
while(i<n && j<m)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
k++;
}
else
{
c[k]=b[j];
k++;
j++;
}}

if(n<=m && j<m)
{
while(j<m)
{
c[k]=b[j];
k++;
j++;
}
}
else
{
while(i<n)
{
c[k]=a[i];
i++;
k++;}
}

printf("The array after merging is \n");
for(k=0;k<(m+n);k++)
{
printf("%d \t",c[k]);
}

return 0;
}
