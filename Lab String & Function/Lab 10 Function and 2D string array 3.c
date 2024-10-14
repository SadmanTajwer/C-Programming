/*3. Input some words and store them in a 2D array. Display the longest word.*/

#include<stdio.h>
int main(){int i,j,f,n;
printf("How many strings?:");
scanf("%d",&f);
char a[f][100];
printf("Please enter  strings:\n ");
for(i=0;i<f;i++){
    scanf("%s",a[i]);
}
int max=0;
for(i=0;i<f;i++){int l=0;
    for(j=0;a[i][j]!='\0';j++){l++;

    }


  if(l>max){
    max=l;
    n=i;
  }
   }printf("The longest word %s",a[n]);


  }
