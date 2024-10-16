/*6. Input two numbers and display the GCD. GCD calculation should be done in user defined function.*/

#include<stdio.h>
#include<math.h>
int GCD_function(int x, int y)
{
    int i,gcd;
    for(i=1;i<=x && i<=y;i++)
    {
        if(x%i==0 && y%i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
int main()
{
    int value1,value2,sum;
    printf("Enter two number :\n");
    scanf("%d%d",&value1,&value2);
    sum=GCD_function(value1,value2);
    printf("GCD is : %d",sum);
    return 0;
}
