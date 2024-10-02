//Write a C program which can input last seven days temperature into an array and display the average temperature.
#include<stdio.h>
int main ()
{
    int i,n,array[7],average = 0;
    float  sum;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the %d days of temperature\n",n);
    for(i=0;i<7;i++)
    {
        scanf("%d",&array[i]);
        average = average + array[i];
        sum=average/(float)n;
    }
    printf("Average of the temperatures are  %f\n",sum);
}

