/*8. Input a number and display whether the number is a prime number or not. Use user defined
function to solve this.*/

#include<stdio.h>
#include<math.h>
int pri(int m)
{
	int i;
	for(i=2;i<=m-1;i++)
	{
		if(m%i==0)
		{
			return 0;
		}
			return 1;
	  }
}
int main()
{
	int n,s;
	printf(" Enter The Value of N:\n");
	scanf("%d",&n);
	if(pri(n)==1)
	{
		printf("%d is Prime",n);
	}
	else
	{
		printf("\n%d is Not Prime",n);
	}
	return 0;
}
