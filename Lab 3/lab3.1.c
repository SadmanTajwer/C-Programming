
//1
#include<stdio.h>
#include<math.h>
main()
{
    int a, b, c;
    printf("Enter three integer numbers: \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("max: %d\n",a);
    }else if(b>c)
    {
        printf("max: %d\n",b);
    }else
    {
        printf("max: %d\n",c);
    }

}
