#include<stdio.h>
void main()
{
    int m,n,c=0;
    printf("Enter the no. of row ");
    scanf("%d",&m);
    printf("Enter the no. of column ");
    scanf("%d",&n);

    int a[m][n];
    for(int i=0 ; i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the values of array:: \n");
            scanf("%d",&a[i][j]);
        }
    }printf("First matrix:- \n");
    for(int i=0 ; i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d  ",a[i][j]);
        }
    printf("\n");
    }
   //to check matrix saparse or not
    
    for(int i=0 ; i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
        if(a[i][j]==0)    
        {
            c+=1;
        }
        }
    }

    if(c>(m*n)/2)
    {
        printf("it is sparse matrix");
    }
    else
    printf("not an sparse mtrix");
}