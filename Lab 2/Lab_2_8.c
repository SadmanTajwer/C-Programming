//8
#include <stdio.h>
#include<math.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a<250){
        printf("Bill amount:%d",a*4);
    }
    else if(a<500){
        printf("Bill amount:%d",a*6);
    }
    else{
        printf("Bill amount:%d",a*9);
    }

}
