/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum(int arr2[],int arr3[],int n)
{   int temp;
    for(int i=0;i<n;i++)
    {
        temp=arr2[i];
        arr2[i]=arr3[i];
        arr3[i]=temp;
    }

    
    for(int i=0;i<n;i++)
    {
        printf("%d",&arr2[i]);
    
    }
     for(int i=0;i<n;i++)
    {
        printf("%d",&arr3[i]);
    
    }
}

int main()
{   int n;
    scanf("%d",&n);   
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    
    }
sum(arr,arr1,n);
    return 0;
}

