/*Write a C program which can some 2D points into an array (The x values in one array and y values in
another array). Display how many points are in each quadrant
Sample Input.
4
5 5
8 8
4 9
3 1
Sample Output
4 0 0 0*/
#include<stdio.h>
int main()
{
    int i,n,x[100],y[100],a=0,b=0,c=0,d=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the %d x values \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Enter the %d y values\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
    }
    for(i=0;i<n;i++)
    {
        if(x[i]>0 && y[i]>0)
        {
            a=a+1;
        }
        else if(x[i]>0 && y[i]<0)
        {
            b=b+1;
        }
        else if(x[i]<0 && y[i]<0)
        {
            c=c+1;
        }
        else if(x[i]<0 && y[i]>0)
        {
            d=d+1;
        }
    }
    printf("First Quadrant %d \n",a);
    printf("second Quadrant %d \n",b);
    printf("third Quadrant %d \n",c);
    printf("Fourth Quadrant %d \n",d);
}








