/*Write a C program which can display the following pattern using nested loop.
?
**
???
****
?????*/

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		if((i%2)==0)
		{
		 	for(j=1;j<=i;j++)
			{
				printf("*");
			}
		}
		else
		{
			for(j=1;j<=i;j++)
			{
				printf("?");
			}
		}
		printf("\n");
	}
}


