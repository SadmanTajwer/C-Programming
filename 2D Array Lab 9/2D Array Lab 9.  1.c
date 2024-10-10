/*Write a C program which can input five students marks in three courses and display the average
marks of each students
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,s;
    float x[100][100];
    printf("Enter the five students marks in three courses:\n ");
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%f",&x[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<5;i++)
    { s=0 ;
        for(j=0;j<3;j++)
        {
            s=s+x[i][j];
        }
     printf("average marks of each students is %.2f \n", s/3.0);
    }
}
