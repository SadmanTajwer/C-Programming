/*Write a C program which can input last seven days temperature in three cities and display in how
many days the temperature increased than that of the previous day*/
#include<stdio.h>
int main()
{
    float a[3][7];
    int i,j;
    printf("Enter seven days temperature in three cities:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<7;j++)
            {
                scanf("%f",&a[i][j]);
            }
    }

    for(i=0;i<3;i++)
    { int c=0,max;
        for(j=0;j<7;j++)
            {max=a[i][j+1];
                 if(a[i][j]<max)
                 {
                     c++ ;
                 }
            }
    printf("\nIn city %d %d days temperature increased than that of the previous day",i+1,c);
   }
}

