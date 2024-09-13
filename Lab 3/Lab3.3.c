
//3
#include<stdio.h>
#include<math.h>
main()
{
    int a, b, c,d;
    printf("Enter four integer numbers: \n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
    {
        printf("max: %d\n",a);
    }else if(b>c && b>d)
    {
        printf("max: %d\n",b);
        }else if(c>d){
        printf("max: %d\n",c);
    }else
    {
        printf("max: %d\n",d);
    }

}
