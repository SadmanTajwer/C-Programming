//2
#include<stdio.h>
#include<math.h>
main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((b*b-4*a*c)>0)
        printf("it's a rational number ");

        else if ((b*b-4*a*c)<0)
            printf("It's not a rational number");
}
