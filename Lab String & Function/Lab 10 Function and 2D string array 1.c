/*1. Input some words and store them in a 2D array. Display which words contains how many
vowels.*/

#include<stdio.h>
int main()
{
    char x[5][100];
    int i,j,c = 0,vowel = 0;
    printf("Enter a sentence :\n");
    for(i=0;i<5;i++)
    {
        scanf("%s",x[i]);
    }
    for (i=0;i<5;i++)
    { vowel = 0;
        for (j=0;x[i][j]!='\0';j++)
        {
            if (x[i][j]=='a'|| x[i][j] == 'e' ||x[i][j] == 'i' ||x[i][j] == 'o' ||x[i][j] == 'u' ||x[i][j] == 'A' ||x[i][j] == 'E' ||x[i][j] == 'I' ||x[i][j] == 'O' ||x[i][j] == 'U')
            {
                vowel=vowel+1;
            }
        }
        printf("%s contain %d vowels\n",x[i],vowel);
    }
    return 0;
}
