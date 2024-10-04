/*Write a C program which can input last seven days temperature and display in how many days the
temperature is increased than that of immediate previous day
Sample Input
36 35 39 37 38 39 38
Sample Output
3*/
#include<stdio.h>
int main()
{
    int i,n,array[100],count=0;
    printf("Enter the size of array ");
    scanf("%d",&n);
    printf("Enter the %d days of temperature\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n-1;i++)
    {
       if(array[i]<array[i+1])
       {
           count=count+1;
       }
    }
    printf("%d days temperature is increased than that of immediate previous day",count);
}
