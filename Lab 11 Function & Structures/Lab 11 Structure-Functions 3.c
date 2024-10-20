/*3. Write a C program which can input some fruits name, price, typical lowest wight, typical
highest wight. Display all the fruits information which’s name start with a vowel.*/
#include<stdio.h>
int main(){
    struct bookinfo{
        char name[100];
        int price, typicallowest,typicalhighest;
    };
    struct bookinfo x[20];
    int i,j,n1,m,t,c;
    printf("Enter array size:");
    scanf("%d",&n1);
    printf("Enter the Name, Price, typicallowest and typicalhighest of fruits:\n");
    for(i=0;i<n1;i++){
        scanf("%s",x[i].name);
        scanf("%d",&x[i].price);
        scanf("%d",&x[i].typicallowest);
        scanf("%d",&x[i].typicalhighest);
    }
    for(i=0;i<n1;i++){
        if(x[i].name[0]=='a'||x[i].name[0]=='e'||x[i].name[0]=='i'||x[i].name[0]=='o'||x[i].name[0]=='u'||x[i].name[0]=='A'||x[i].name[0]=='E' ||x[i].name[0]=='I'||x[i].name[0]=='O'||x[i].name[0]=='U'){
                t=i;
                printf("%s\n",x[t].name);
                printf("%d\n",x[t].price);
                printf("%d\n",x[t].typicallowest);
                printf("%d\n",x[t].typicalhighest);

        }
    }
}
