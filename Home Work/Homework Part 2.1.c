/*1. Write a C program which can input some numbers from the user and store them into an
array. Then display the maximum number from those input value. Also display how many
numbers are equal to that maximum value.*/
#include<stdio.h>
int main()
{
    int n,num[100],i,max=num[0],count=0;
    printf("Enter values of array : \n");
    scanf("%d",&n);
    printf("Enter %d values of arrays\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for (i=0;i<n;i++)
    {
        if (num[i]>max)
        {
            max=num[i];
        }
    }
    for (i=0;i<n;i++)
    {
        if(num[i]== max)
        {
            count++;
        }
    }
    printf("Max value is %d\n",max);
    printf("Total maximum number from array is %d",count);
    return 0;
}
