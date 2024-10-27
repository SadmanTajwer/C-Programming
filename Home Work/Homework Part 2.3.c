/*4. Write a C program to input some numbers into an array. Then find how many numbers of
that array is greater than first element of the array and how many numbers of that array
is smaller than first element of the array.*/
#include<stdio.h>
int main()
{
    int n,num[100],i,count1=0,count2=0;
    printf("Enter values of array : \n");
    scanf("%d",&n);
    printf("Enter %d values of arrays\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for (i=0;i<n;i++)
    {
        if (num[i]>num[0])
        {
            count1++;
        }
    }
    for (i=0;i<n;i++)
    {
        if (num[i]<num[0])
        {
            count2++;
        }
    }
    printf ("\nFirst elements is %d\n\n",num[0]);
    printf("%d numbers are greater than first element\n\n",count1);
    printf("%d numbers are smaller than first element\n",count2);
    return 0;
}
