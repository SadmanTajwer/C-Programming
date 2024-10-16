/*4. Input some words and store them in a 2D array. Display the words in all uppercase format.*/

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i;
    printf("Enter a sentence : \n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    printf("Converted sentence in upper case \n%s",s);
}
