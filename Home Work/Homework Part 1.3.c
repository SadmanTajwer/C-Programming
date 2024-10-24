//3. Write a C program which can input name of some country and display the name with the
//least length.
#include<stdio.h>
int main ()
{
    int n,i,j,c=0,p;
    printf("Enter the number of country: ");
    scanf("%d",&n);
    printf("Enter %d country name\n",n);
    char country[n][100];
    int least=0;
    for(i=0;i<n;i++)
    {
        scanf("%s",country[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",country[i]);
    }
    for(i=0;i<n;i++)
    { c=0;
        for(j=0;country[i][j]!='\0';j++)
        {
            c++;
        }
        printf("%s string length is %d\n",country[i],c);
    }
    //least=country[0][0];
    for (i=1;i<n;i++)
    {
        if(c<least)
    {
        least=c;
        p=i;
    }
    }
    printf("The smallest country name is %s and length is %d",country[p],c);
    return 0;
}
