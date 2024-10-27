/*1. Write a C program which can input some numbers from the user and store them into an
array. Then display the maximum number from those input value. Also display how many
numbers are equal to that maximum value. [Finding maximum should be done in a user
defined function. Another function should be there which can count number of value
equal with the calculated maximum]*/
#include<stdio.h>

int count_maximum_number(int x[])
{
    int count=0,i,n,max=num[i];
    for (i=0;i<n;i++)
    {
        if(max==x[i]);
        {
            count++;
        }
    }
    return count;
}







int main()
{
    int n,num[100],i,max=num[0],body,x;
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
    for(i=0;i<n;i++)
    {
        body=count_maximum_number(num);
    }
    printf("Max value is %d\n",max);
    printf("Total maximum number from array is %d",body);
    return 0;
}
