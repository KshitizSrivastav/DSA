// Union of Sets
int main()
{
int m,n,i=0,j=0,k=0,l,o;
printf("Enter the no of elements in Array 1");
scanf("%d",&n);
printf("Enter the no of elements in Array 2");
scanf("%d",&m);
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
while (i<n && j<m)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
k++;
}
else if(a[i]==b[j])
{
c[k]=a[i];
k++;
i++;
j++;
}
else
{
c[k]=b[j];
j++;
k++;
}
}
if(n<=m && j<m)
{
while (j<m)
{
c[k]=b[j];
j++;
k++;
}
}
else
{
while(i<n)
{
c[k]=a[i];
j++;
k++;
}
}
printf("The union of sets is\n");
for(i=0;i<k;i++)
{
printf("%d \t",c[i]);
}
return 0;
}
