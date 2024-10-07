/*Write a C program which can input some numbers and display for each one the number of value
bigger than that in the following list of numbers.
As example:
Input: 5 4 3 4 8 7
Output: 2 2 3 2 0 0
2)2)*/
#include<stdio.h>
int main(){
    int a[100],i,j,c=0,x;
    printf("Please enter the number of input:");
    scanf("%d",&x);
    for(i=0;i<x;i++){
    scanf("%d",&a[i]);}
    for(i=0;i<ix;i++){
            c=0;
        for(j=i+1;j<x;j++){
                if(a[i]<a[j]){
                    c++;
}
}
printf("\n%d",c);}
}
