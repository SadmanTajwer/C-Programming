//6. Input a word from the user and whenever you find a vowel replace it with “*”
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50], i;
    printf("Enter a word : \n");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'
           || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I'
           || str[i]=='O' || str[i]=='U')
        {
            str[i] = '*';
        }
    }
    printf("\nNew String (after replacing vowel with *) = %s",str);
    return 0;
}
