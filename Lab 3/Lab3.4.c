
//4
#include<stdio.h>
#include<math.h>
 int main()
{
	int a,b,c,d;
	printf("Entar Value A : \n");
	scanf("%d",&a);
	printf("Enter Value B : \n");
	scanf("%d",&b);
	printf("Enter Value C : \n");
	scanf("%d",&c);
	printf("Enter Value d : \n");
	scanf("%d",&d);
	if(a>b)
	{
		if(a>c && a>d)
		{
			printf("\nA is Maximum Value.%d",a);
		}

		else
		{
			printf("\nD is Maximum Value.%d",d);
		}
	}

        else if(b>d)
	{
		if (b>d)
		{
			printf("\nB is Maximum Value.%d",b);
		}
		else
		{
			printf("\D is Maximum Value.%d",d);
		}
	}
        else{
		if(c>d)
		{
			printf("\nC is Maximum Value.%d",c);
		}
		else
		{
			printf("\nD is Maximum Value.%d",d);
		}
	}
	getch();
}
