//6
#include<stdio.h>
#include<math.h>
int main(){
int r,a;
float sphere,cube;
printf("Please enter the radius of the sphere:");
scanf("%d",&r);
printf("Please enter the length of the cube:");
scanf("%d",&a);
sphere=4/3*3.1416*r*r*r;
cube=a*a*a;
if(sphere>cube){
    printf("Store more water in the sphere container");
}
else if(sphere>cube){
    printf("Store more water in the cube container");

}
}
