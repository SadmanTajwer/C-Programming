//Write a C program to check whether a character is vowel or consonant.

/*#include<stdio.h>
int main()
{
    char x;
    printf("Enter a letter : \n");
    scanf("%c",&x);
    if(x=='a' || x=='e'|| x=='i'|| x=='o'||x=='u')
    {
        printf("Small letter Vowel");
    }
    else if(x=='A' || x=='E'|| x=='I'|| x=='O'||x=='U')
    {
        printf("Capital letter Vowel");
    }
    else
    {
        printf("Consonent");
    }
}*/

//Write a C program to count vowel, consonant ant digit from a given string

/*#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,vowel=0,consonent=0,space=0,digit=0;
    printf("Enter the sentence : \n");
    gets(s);
    for(i=0; s[i] != '\0';i++)
    {
        if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ||s[i] == 'A' ||s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U' )
        {
            vowel=vowel+1;
        }
        else if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            consonent=consonent+1;
        }
        else if(s[i] == ' ')
        {
            space=space+1;
        }
        else if(s[i] >= '0' && s[i] <= '9' )
        {
            digit=digit+1;
        }
    }
    printf("\n\n\nVowel = %d \nConsonent = %d \nSpace = %d \nDigit = %d",vowel,consonent,space,digit);
}*/

//Write a C program to convert a string in upper case

/*#include<stdio.h>
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
}*/

//Write a C program to convert a string in lower case


/*#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i;
    printf("Enter a sentence : \n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    printf("Converted sentence in lower case \n%s",s);
}*/
// Replace Vowels with Character from given String
// ----codescracker.com----

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50], i;
    printf("Enter any string: ");
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










