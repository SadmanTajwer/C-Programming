/*1. Write a C program which can input some mountains information (name, location, height)
and display the average height of those mountains. Also display how many mountains
are taller than average height. [The program should have a structure which can describe
a mountain.*/
#include<stdio.h>
int main()
{
    struct mountains_information
    {
        char name[100],location[100];
        int height;
    };
    int n;
    printf("Enter the Mountains_information what do you want?\n");
    scanf("%d",&n);
    struct mountains_information x[n];
    int i,sum=0,count=0;
    float average;
    for (i=0;i<n;i++)
    {
        printf("Enter the mountain name: \n");
        scanf("%s",x[i].name);
        printf("Enter the mountain location: \n");
        scanf("%s",x[i].location);
        printf("Enter height of the mountain: \n");
        scanf("%d",&x[i].height);
    }
    for (i=0;i<n;i++)
    {
        sum = sum + x[i].height;
    }
    average=sum/(float)n;
    for(i=0;i<n;i++)
    {
        if(x[i].height>average)
        {
            count++;
        }
    }
    printf("Average heights of those mountain is %.2f\n",average);
    printf("%d of mountains are taller than average height",count);
    return 0;
}
