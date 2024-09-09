#include<stdio.h>
#include<math.h>
main()
{
    int a,b,c,d;
    printf("Enter the value of x1 : \n");
    scanf("%d",&a);
    printf("Enter the value of y1 : \n");
    scanf("%d",&b);
    printf("Enter the value of x2 : \n");
    scanf("%d",&c);
    printf("Enter the value of y2 : \n");
    scanf("%d",&d);
    if(a>0 && b>0)
    {
        printf("it is first quadrant\n");
        if(c>0 && d>0)
        {
            printf("It is also first quadrant But two points are fails into same exis");
        }
        else if (c>0 && d<0)
        {
            printf ("It is second quadrant");
        }
        else if(c<0 && d<0)
        {
            printf("It is third quadrant");
        }
        else if(c<0 && d>0)
        {
            printf("It is fourth Quadrant");
        }
    }
    else if (a>0 && b<0)
    {
        printf("It is second quadrant\n");
        if(c>0 && d<0)
        {
            printf(" It is also second quadrant But two points are fails into same exis");
        }
        else if (c>0 && d>0)
        {
            printf("It is first quadrant");
        }
        else if (c<0 && d<0)
        {
            printf("It is third Quadrant");
        }
        else if(c<0 && d>0)
        {
            printf ("It is fourth quadrant");
        }
    }
    else if (a<0 && b<0)
    {
        printf("It is third Quadrant\n");
        if(c<0 && d<0)
        {
            printf("It is also third quadrant but two points are fails into same exis");
        }
        else if (c>0 && d>0)
        {
            printf ("it is first quadrant");
        }
        else if(c>0 && d<0)
        {
            printf ("It is second quadrant");
        }
        else if (c<0 && d>0)
        {
            printf("It is fourth quadrant");
        }
    }
    else if (a<0 && b>0)
    {
        printf("it is fourth quadrant\n");
        if(c<0 && d>0)
        {
            printf("It is also fourth quadrant but two points are fails into same exis");
        }
        else if(c>0 && d>0)
        {
            printf("it is first quadrant");
        }
        else if(c>0 && d<0)
        {
            printf("It is second quadrant");
        }
        else if (c<0 && d<0)
        {
            printf("it is third quadrant");
        }
    }
}
