#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("for additon 1 \n");
    printf("for subtraction 2 \n");
    printf("for multiplication 3 \n");
    printf("for division 4 \n");
    printf("Enter your choice \n");
    scanf("%d",&c);
    switch(c){
        case 1:
        printf("%d",a+b);
        break;
        case 2:
        printf("%d",a-b);
        break;
        case 3:
        printf("%d",a*b);
        break;
        case 4:
        printf("%d",a/b);
        break;
    }
return 0;



}