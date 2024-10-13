/*Write a C program which can input last seven days temperature in three cities and display in which
city the highest temperature was recorded.*/
#include<stdio.h>
int main()
{
    float a[3][7];
    int i,j,city;
    printf("Enter last seven days temperature in three cities:\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<7;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    float max=a[0][0];
    for(i=0;i<3;i++)
    {
       for(j=0;j<7;j++)
        {
            if(a[i][j]>max)
              {
                  max=a[i][j];
                   city=i;
              }
        }
    for(j=0;j<7;j++)
    {
       if(a[i][j]==max)
          {
             printf("\nCity %d has the highest temperature was recorded",i+1);
          }
    }
    }
}
