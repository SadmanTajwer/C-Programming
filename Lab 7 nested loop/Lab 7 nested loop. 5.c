/*Write a C program which can display the following pattern using nested loop.
?????
????
???
??
?*/

#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("?");
		}
		printf("\n");
	}
}




