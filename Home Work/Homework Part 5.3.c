/*3. Write a C program which can fill up a 3x3 matrix by user input and check whether sum of
all row is odd or not.*/
#include<stdio.h>
int main()
{
    int n,i,j,mat1[100][100],sum=0;
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
            sum = sum + mat1[i][j];
        }
    }
    printf("Sum of all row is %d\n",sum);
    if (sum % 2 != 0)
    {
        printf("sum of all row is odd\n");
    }
    else
    {
        printf("sum of all row is even\n");
    }
    return 0;
}
