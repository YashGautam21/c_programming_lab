#include<stdio.h>
void main()
{
    int r1,r2,c1,c2;
    printf("Enter the number of row of matrix 1:-\n");
    scanf("%d",&r1);
    printf("Enter the number of column of matrix 1:-\n");
    scanf("%d",&c1);
    printf("Enter the number of row of matrix 2:-\n");
    scanf("%d",&r2);
    printf("Enter the number of column of matrix 2:-\n");
    scanf("%d",&c2);
    int a[r1][c1],b[r2][c2],x;
    for(int i=0 ; i<r1;i++)

    {
        for(int j=0;j<c1;j++)
        {
            printf("Enter the values of array1:: \n");
            scanf("%d",&x);
            a[i][j]=x;
        }
    }printf("First matrix:- \n");

    for(int i=0 ; i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d  ",a[i][j]);
        }
    printf("\n");
    }
    for(int i=0 ; i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("Enter the values of array2:: \n");
            scanf("%d",&x);
            b[i][j]=x;
        }
    }printf("Second matrix:- \n");
    for(int i=0 ; i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d  ",b[i][j]);
        }
    printf("\n");
    }
    if(c1==r2)
    {
        int c[r1][c2],n,sum;
        for(int i=0;i<r1;i++)
        {   
            for(int j=0;j<c2;j++)
            {
            c[i][j]=0;
            for(int k=0;k<c2;k++)
            {    c[i][j]+=a[i][k]*b[k][j];
            }    
            }
       // c[i][n]=sum;
        }printf("Multiplication of first and second matrix is:-\n");
        for(int i=0 ; i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d  ",c[i][j]);
        }
    printf("\n");
    }
    }


}

