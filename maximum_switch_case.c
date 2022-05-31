#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int out = a > b;
    switch(out){
        case 1:
        printf("A is greater");
        break;
        default:
        printf("B is greater");
        
    }
return 0;
}
