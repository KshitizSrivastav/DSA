// Intersection of sets
#include <stdio.h>
void main()
{
    int i, j, m, n, k=0;
    printf("Enter size of first array ");
    scanf("%d", &n);
    printf("Enter size of second array ");
    scanf("%d", &m);
    int a[n], b[m], c[m + n];
    printf("Enter elements of first array ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter elements of second array ");
    for (j = 0; j < m; j++)
    {
        scanf("%d", &b[j]);
    }
   for( i=0;i<n;i++)
    {
         for(j=0;j<m;j++)
         {
            if(a[i]==b[j])
            {
                c[k]=a[i];
                k++;
            }
         }

    }
    printf("The intersection of array is\n");
    for (int i = 0; i <k ; i++)
    {
        printf("%d  ", c[i]);
    }
}
