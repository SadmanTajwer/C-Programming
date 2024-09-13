
//2
#include<stdio.h>
#include<math.h>
 main()
{
	int a,b,c;
	printf("Entar Value A : \n");
	scanf("%d",&a);
	printf("Enter Value B : \n");
	scanf("%d",&b);
	printf("Enter Value C : \n");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("\nA is Maximum Value.%d",a);
		}
		else
		{
			printf("\nC is Maximum Value.%d",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("\nB is Maximum Value.%d",b);
		}
		else
		{
			printf("\nC is Maximum Value.%d",c);
		}
	}
	getch();
}
