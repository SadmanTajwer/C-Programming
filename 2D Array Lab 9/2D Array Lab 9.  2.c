/*Write a C program which can input five students marks in three courses and display whether student
pass in all courses (60 is pass marks)*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,c,x[100][100];
    printf("Enter the five students marks in three courses :\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<5;i++)
    { c=0;
        for(j=0;j<3;j++)
        {
            if (x[i][j] >= 60 )
            {
                c++;
            }
        }
        if(c==3)
        {
            printf("yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}
