#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a;
    float b;
    scanf("%d",&a);
    float arr[a],p=0,n=0,z=0;
    for(int i=0;i<a;i++)
    {
        arr[i]=scanf("%f",&b);
    }
    for(int i=0;i<a;i++)
    {
        printf("%f",arr[i]);
    }
    for(int i=0;i<a;i++)
    {
        if (arr[i] <= 0.0) {
        if (arr[i] == 0.0)
            z+=1;
        else
            n+=1;
    } 
    else
        p+=1;
    }
    printf("%f",p/a);
    printf("%f",n/a);
    printf("%f",z/a);
    return 0;
}
