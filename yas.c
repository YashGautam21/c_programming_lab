#include<stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
 mai   switch(a>0)
    {
        case 0:
        printf("sorry number is negative");
        break;
        case 1:
        switch(a==0)
        {
            case 0:
            printf("Game start");
            break;
            case 1:
            printf("please try again");
        }
    }return 0;
}