//10
#include<stdio.h>
#include<math.h>
int main()
{
int x,y,i;
printf("Please enter the range:");
scanf("%d",&y);
printf("Please enter two number:");
for(i=1;i<=y;i++){
        scanf("%d%d",&x,&y);
    if(x>y){
            printf("%d is the largest",x);
    }
    else{printf("%d is the largest",y);}
}
}

