/*5. Write a C program that takes two n*n matrices A and B as input, and outputs A-B.*/
#include<stdio.h>
int main()
{
    int n,i,j,MatA[100][100],MatB[100][100],MatC[100][100];
    printf("Enter values of matrix : ");
    scanf("%d",&n);
    printf("Enter %d*%d values of matrix\n",n,n);
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&MatA[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&MatB[i][j]);
        }
    }
    printf("Matrix A is\n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%5d",MatA[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B is\n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%5d",MatB[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            MatC[i][j]=MatA[i][j]-MatB[i][j];
        }
    }
    printf("Subtract Matrix is\n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%5d",MatC[i][j]);
        }
        printf("\n");
    }

    return 0;
}

