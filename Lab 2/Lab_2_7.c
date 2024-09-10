//7
#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a%100;
    c=ceil(a/100);
    printf("Difference between two numbers:%d",b-c);
}
