#include<stdio.h>
#include<math.h>
void main()
{
    int c=0,n,temp;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
       // temp=temp%10;
        temp/=10;
        c+=1;
    }
    int arm=0;
    temp=n;
    for(int i=0;i<c;i++)
    {
        temp=temp%10;
        n=n/10;
        arm=arm+pow(temp,c);

    }
    if(arm==n)
    {
        printf("it is an armstrong no.");
    }
}