//4

/*Write a C program which can input some persons’ age into an array
 and display how many of them are older than average age of those persons*/


#include<stdio.h>
int main ()
{
    int n,i,average = 0,count = 0,array[100];
    float sum;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the %d persons age\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        average=average + array[i];
        sum = average/(float)n;
        if(sum<array[i])
        {
            count=count+1;
        }
    }
    printf("older than average age of those persons %d\n",count);
}
