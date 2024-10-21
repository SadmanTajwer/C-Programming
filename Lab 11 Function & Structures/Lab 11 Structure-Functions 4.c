/*4. Write a C program which can input last 7 days temperature of two different cities.
Display the highest temperature of each city. [Use appropriate user defined function]
Answer 4:*/
#include<stdio.h>
int max(int *x){int i,s;
s=x[0];
for(i=0;i<7;i++){
    if(x[i]>s){
       s=x[i];
    }
}
return s;}
int main(){ int i,z=0,s=0;
int x[7],y[7];
printf("1ST CITY TEMP:");
for(i=0;i<7;i++){
    scanf("%d",&x[i]);
    }
printf("2ND CITY TEMP:");
for(i=0;i<7;i++){
    scanf("%d",&y[i]);
    }
z=max(x);
s=max(y);
printf("1ST CITY HIGH TEM:%d \n 2ND CIT HIGH TEMP:%d",z,s);}
