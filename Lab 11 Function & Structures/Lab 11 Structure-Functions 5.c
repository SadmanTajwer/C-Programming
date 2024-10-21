/*5. Write a C program which can input last 7 days temperature of two different cities.
Display highest temperature found in first city or in the second city.
[Use appropriate user defined function]*/
//Answer 5:

#include<stdio.h>
int Findmax(int *a){
    int i,m;
    for(i=0;i<7;i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    return m;
}
int main(){
    int i,city1[7],city2[7],ans1,ans2,m;
    m=0;
    printf("Enter temperature of two city:");
    for(i=0;i<7;i++){
        scanf("%d%d",&city1[i],&city2[i]);
    }
    ans1=Findmax(city1);
    ans2=Findmax(city2);
    if(ans1>ans2){
        printf("Highest temp found in first city");
    }
    else{
        printf("Highest temp found in second city");
    }
}
