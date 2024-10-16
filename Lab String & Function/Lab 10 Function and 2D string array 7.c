/*7. Input a number and display the biggest proper factor of that number. Use user defined function
to solve this.*/

#include<stdio.h>
int big_f(int x){int i,max=0;
for(i=2;i<x;i++){
        if(x%i==0){
                if(i>max){
                    max=i;
                }

        }

}printf("Largest proper factor %d",max);}
int main(){
int x;
printf("Enter a number :\n");
scanf("%d",&x);
big_f(x);
return 0;}
