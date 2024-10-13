/*Write a C program which can input last seven days temperature in three cities and display whether
any city’s temperature increased in each day compared to the previous day*/
#include<stdio.h>

int main()
{
   float temperature[3][7];
   int i ,j;


   for(i=0;i<3;i++)
   {
       for(j=0;j<7;j++)
       {
           printf("City[%d], Day[%d]: ", i+1, j+1);
           scanf("%f", &temperature[i][j] );
       }
   }
   for(i=0;i<3;i++)
   {
       for(j=0;j<7;j++)
       {
           printf("City[%d], Day[%d]=%.2f\n", i+1, j+1, temperature[i][j]);
       }
       printf("\n");
   }
   for(i=0;i<3;i++)
    { int c=0,max;
        for(j=0;j<7;j++)
            {max=temperature[i+1][j+1];
                 if(temperature[i][j]<max)
                 {
                     c++ ;
                 }
            }
    printf("\nIn city %d %d days temperature increased than that of the previous day",i+1,c);
   }

   return 0;
}
