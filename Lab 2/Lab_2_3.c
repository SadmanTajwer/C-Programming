//3
#include<stdio.h>
#include<math.h>
main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if (a>0&&b>0)
    printf("this is first quadrant");
    else if(a>0&&b<0)
    printf("this is second quadrant");
    else if(a<0&&b<0)
    printf("this is third quadrant");
    else if(a<0&&b>0)
    printf("this is fourth quadrant");
}
