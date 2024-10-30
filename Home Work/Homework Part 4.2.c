/*2. Write a C program which can input some country’s information (name, area, population)
and display the name of the biggest country. [The program should have a structure which
can describe a country]*/
#include<stdio.h>
int main()
{
    struct countrys_information
    {
        char name [100];
        int area,population;
    };
    int n;
    printf("Enter the country's information what do you want?\n");
    scanf("%d",&n);
    struct countrys_information x[n];
    int i,max,p,len[100];
    for(i=0;i<n;i++)
    {
        printf("Enter the country name: \n");
        scanf("%s",x[i].name);
        printf("Enter area of the country: \n");
        scanf("%d",&x[i].area);
        printf("Enter the population of the country: \n");
        scanf("%d",&x[i].population);
    }
    for (i=0;i<n;i++)
    {
        len[i]=strlen(x[i].name);
    }
    for (i=0;i<n;i++)
    {
        printf("%s string length is %d\n",x[i].name,len[i]);
    }
    max=len[0];
    for(i=0;i<n;i++)
    {
        if (len[i]>max)
        {
            max=len[i];
            p=i;
        }
    }
    printf("The name of the biggest country is %s",x[p].name);
}
