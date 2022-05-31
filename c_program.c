#include<stdio.h>
#include<ctype.h>
void main()
{
   
    // check alphabet chARACTER
    char a;
    printf("Enter the character");
    scanf("%c",&a);
    if(isalpha(a))
    {
        printf(" it is alphabet");

    }
    else
    {
        printf("it is not alphabet");
    }
}
