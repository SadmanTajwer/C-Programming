/*5. Consider the following equation of velocity: v 2 = u 2 + 2as. Now, write a function
that takes u, a and s as argument and return the value of v to caller function.*/
#include<stdio.h>
float velocity(int u,int a,int s)
{
    float v;
    v=sqrt((u*u)+(2*a*s));
    return v;
}
int main()
{
   int u, a, s;
   float sum;
   printf("Enter the value of u =\n");
   scanf("%d", &u);
   printf("Enter the value of a =\n");
   scanf("%d", &a);
   printf("Enter the value of s =\n");
   scanf("%d", &s);
   sum=velocity(u,a,s);
   printf("The velocity is %.2f",sum);
   return 0;
}
