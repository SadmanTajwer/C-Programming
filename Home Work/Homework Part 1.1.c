/*1. Write a C program which can input some words from the user and display the number of
vowels of the longest word.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array: \n");
    scanf("%d",&n);
    printf("Enter %d of words",n);
    char word[100];
    int i,len[100],p,count=0,max;
    for(i=0;i<n;i++)
    {
        scanf("%s",word);
    }
    for(i=0;i<n;i++)
    {
        len[i]=strlen(word[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%s string length is %d",word[i],len[i]);
    }
    max=len[0];
    for(i=0;i<n;i++)
    {
        if(len[i]>max)
        {
            max=len[i];
            p=i;
        }
    }
    if( word[p]=='a'|| word[p]=='e'|| word[p]=='i'|| word[p]=='o'|| word[p]=='u'|| word[p]=='A'|| word[p]=='E'|| word[p]=='I'|| word[p]=='O'|| word[p]=='U' )
    {
        count++;
    }
    printf("the number of vowels of the longest word is %d",count);
    return 0;
}
