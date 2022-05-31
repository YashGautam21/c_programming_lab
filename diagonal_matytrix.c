#include<stdio.h>
void main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n][n];
    
for( i=0;i<n;i++)
    {
        for( j=0;j<n;j++)
        {
           scanf("%d",arr[i][j]);
        }
    }
for(i=0;i<n;i++)
    {
        for( j=0;j<n;j++)
        {
           printf("%d",arr[i][j]);
        }printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for( j=0;j<n;j++)
        {
            if(i==j)
            {
                arr[i][j]=0;
            }
        }
    }
for( i=0;i<n;i++)
    {
        for( j=0;j<n;j++)
        {
           printf("%d",arr[i][j]);
        }printf("\n");
    }
}
