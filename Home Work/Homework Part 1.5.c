//5. Write a C program which can input a word and display ratio between uppercase letter
//and lowercase letter.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,c=0,d=0;
    printf("Enter a word : \n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            c++;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z')
        {
            d++;
        }
    }
    printf("Ratio between uppercase letter and lowercase letter is %d : %d",d,c);
}
