#include<stdio.h>
void main()
{
    int a[2][2],b[2][2],x;
    for(int i=0 ; i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter the values of array1:: \n");
            scanf("%d",&x);
            a[i][j]=x;
        }
    }printf("First matrix:- \n");
    for(int i=0 ; i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d  ",a[i][j]);
        }
    printf("\n");
    }
    for(int i=0 ; i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter the values of array2:: \n");
            scanf("%d",&x);
            b[i][j]=x;
        }
    }printf("Second matrix:- \n");
    for(int i=0 ; i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d  ",b[i][j]);
        }
    printf("\n");
    }
}