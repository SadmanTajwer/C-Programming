/*Write a C program which can input some students’ marks and display which grades are achieved by
most of the students (Grades are A, B, C, and D)
Sample Input
8
77 65 74 97 87 85 99 80
Sample Output
B*/
#include<stdio.h>
int main()
{
    int i,n,array[100],A=0,B=0,C=0,D=0;
    printf("Enter the size of array ");
    scanf("%d",&n);
    printf("Enter the %d students marks\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        if(array[i]>=90)
        {
            A=A+1;
        }
        else if(array[i]>=80)
        {
            B=B+1;
        }
       else if(array[i]>=70)
        {
            C=C+1;
        }
        else if(array[i]>=60)
        {
            D=D+1;
        }
    }
    if(A>B && A>C && A>D)
    {
        printf("A");
    }
    else if(B>A && B>C && B>D)
    {
        printf("B");
    }
    else if(C>A && C>B && C>D)
    {
        printf("C");
    }
    else if(D>B && D>C && D>A)
    {
        printf("D");
    }

}
