//2. Write a C program which can input some numbers into an array find how many of those
//are above average number.
#include<stdio.h>
int main()
{
    int n,num[100],i,sum=0,count=0;
    float average;
    printf("Enter values of array : \n");
    scanf("%d",&n);
    printf("Enter %d values of arrays\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for (i=0;i<n;i++)
    {
        sum=sum+num[i];
    }
    average=sum/(float) n;
    for (i=0;i<n;i++)
    {
        if(num[i] > average)
        {
            count++;
        }
    }
    printf("Average number is %.2f\n",average);
    printf("Total average number from array is %d",count);
    return 0;
}
