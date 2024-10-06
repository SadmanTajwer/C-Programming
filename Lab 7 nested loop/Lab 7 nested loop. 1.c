//Write a C program which can input some numbers in an array and display how many of those
//numbers has more than five factors.
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,c=0,x[100],d=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter %d positive elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for (i=0;i<n;i++)
    { c=0;
        for(j=1;j<=x[i];j++)
        {
            if(x[i]%j ==0)
            {
              c++;
            }
        }
        if(c<5)
        {
           d++ ;
        }
    }
    printf("%d numbers are more than 5 factors",d);
}
