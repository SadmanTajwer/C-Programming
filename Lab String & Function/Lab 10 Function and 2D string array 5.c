/*5. Input some words and store them in a 2D array. Display the words all vowels in uppercase and
all consonants in lowercase format.*/

#include<stdio.h>
int main(){int i,j,f;
printf("How many strings?:\n");
scanf("%d",&f);
char a[f][100];
printf("Please enter  strings:\n ");
for(i=0;i<f;i++){
    scanf("%s",a[i]);
}

for(i=0;i<f;i++){
    for(j=0;a[i][j]!='\0';j++){if(a[i][j]=='a'||a[i][j]=='e'||a[i][j]=='i'||a[i][j]=='o'||a[i][j]=='u'){
            a[i][j]=a[i][j]-32;

    }
    if(a[i][j]=='A'||a[i][j]=='E'||a[i][j]=='I'||a[i][j]=='O'||a[i][j]=='U'){
            a[i][j]=a[i][j];

    }


    else if(a[i][j]>='A'&&a[i][j]<='Z'){a[i][j]=a[i][j]+32;}



}printf("\n%s",a[i]);}}
