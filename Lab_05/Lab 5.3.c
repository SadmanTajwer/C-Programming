/*Write a C program which can input last seven days temperature into an array
and display the highest
temperature. How many days that highest is found
Sample Input
36 35 39 37 38 39 38
Sample Output
39
2*/
#include<stdio.h>
int main()
{
    int n,i,average=0,array[7],max=0,count=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the %d days of temperature\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]>max){
            max=array[i];}

    }
    for( i=0;i<n;i++)
    {
      if(max == array[i])
           {
               count++;
           }
    }

    printf("The highest temperature is %d\n",max);
    printf("The highest found days are %d",count);
    return 0;
}
