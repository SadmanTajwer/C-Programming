/*2. Write a C program which can fill up a 3x3 matrix by user input and check whether the
number odd number is more than number of even number.*/
#include<stdio.h>
int main()
{
    int n,i,j,mat1[100][100],Even=0,Odd=0;
    printf("Enter The value of matrix : ");
    scanf("%d",&n);
    printf("Enter %d*%d values of matrix\n",n,n);
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Matrix 1 is\n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%5d",mat1[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(mat1[i][j]%2==0)
            {
                Even++;
            }
        }
    }
    printf("Even Number from the Matrix is %d\n",Even);
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(mat1[i][j]%2!=0)
            {
                Odd++;
            }
        }
    }
    printf("Odd Number from the Matrix is %d\n",Odd);
    if (Odd>Even)
    {
        printf("Odd number is more than number of Even number\n");
    }
    else
    {
        printf("Even number is more than number of Odd number\n");
    }

    return 0;
}
