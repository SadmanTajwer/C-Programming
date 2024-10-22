/*6. Write a C program which can input last 7 days temperature of two different cities.
Display difference between highest and average temperature each city. Display difference
between lowest and average temperature each city. Display difference between highest and
lowest temperature each city.[Use appropriate user defined function]
Answer 6:*/

#include<stdio.h>
#include<math.h>
int Findmax(int *a){
    int i,m;
    for(i=0;i<7;i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    return m;
}
int Findavg(int *a){
    int i,s;
    float avg;
    s=0;
    for(i=0;i<7;i++){
        s=s+a[i];
    }
    avg=s/7.0;
    return avg;
}
int Findmin(int *a){
    int i,min;
    min=a[0];
    for(i=0;i<7;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}
int main(){
    int i,city1[7],city2[7],ans1,ans2,ans3,ans4,ans5,ans6,m,n5,n6,min;
    float n1,n2,n3,n4,n7,n8;
    printf("Enter temperature of two city:\n");
    for(i=0;i<7;i++){
        scanf("%d%d",&city1[i],&city2[i]);
    }
    ans1=Findmax(city1);
    ans2=Findmax(city2);
    ans3=Findavg(city1);
    ans4=Findavg(city2);
    ans5=Findmin(city1);
    ans6=Findmin(city2);
    n1=ans1-(float)ans3;
    n2=ans2-(float)ans4;
    n3=ans5-(float)ans3;
    n7=abs(n3);
    n4=ans6-(float)ans4;
    n8=abs(n4);
    n5=ans1-ans5;
    n6=ans2-ans6;
    printf("Difference between Highest and avarage temp of first city is %f\n",n1);
    printf("Difference between Highest and avarage temp of second city is %f\n",n2);
    printf("Difference between Lowest and avarage temp of first city is %f\n",n7);
    printf("Difference between Lowest and avarage temp of second city is %f\n",n8);
    printf("Difference between Highest and lowest temp of first city is %d\n",n5);
    printf("Difference between Highest and lowest temp of second city is %d\n",n6);
}
