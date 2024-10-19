//1. Write a C program which can input some rivers name, length and country of origin.
//Display the name of the longest river.
#include<stdio.h>

int main()
{
    struct rivers_info{
    int length;
    char name[30];
    char origin[100];
    };
    int n;
    printf("Enter the rivers_info what do you want : ");
    scanf("%d",&n);
    struct rivers_info x[n];

    int i,max,p,t,len,a,b;
    printf("Enter the length,name and the origin of the rivers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i].length);
        scanf("%s",x[i].name);
        scanf("%s",x[i].origin);
    }
    a=strlen(x[i].name);
    b=strlen(x[0].name);
    for(i=0;i<n;i++)
    {
        if(a>b)
        {
            len=a;
            t=i;
        }
        //else
        //{
          //  len=b;
            //t=i;
        //}
    }
    printf("%s\n",x[t].name);


    max=x[0].name;
    for(i=0;i<n;i++)
    {
        if(x[i].name>max)
        {
            max=x[i].name;
            p=i;
        }
    }
    printf("The name of the longest river's is %s ",x[p].name);
}
