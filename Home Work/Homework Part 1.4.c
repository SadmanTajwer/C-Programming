/*4. Write a C program which can input a word and interchange the case of each letter. Then
display the converted word. As example, if input is YouTube then output should be
yOUtUBE*/

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i;
    printf("Enter a word : \n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    printf("\n%s",s);
}
