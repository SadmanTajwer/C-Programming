/*2. Write a C program which can input some book’s name, author’s name, pages, price.
Display the book’s information which’s name containing the highest number of vowels.*/
#include<stdio.h>
int main(){
    struct bookinfo{
        char name[100],author[100];
        int page,price;
    };
    struct bookinfo x[20];
    int i,j,n1,m,t,c;
    printf("Enter array size:");
    scanf("%d",&n1);
    printf("Enter the Name, Author, Page and price of Books:\n");
    for(i=0;i<n1;i++){
        scanf("%s",x[i].name);
        scanf("%s",x[i].author);
        scanf("%d",&x[i].page);
        scanf("%d",&x[i].price);
    }
    m=0;
    for(i=0;i<n1;i++){
            c=0;
            for(j=0;x[i].name[j]!='\0';j++){
        if(x[i].name[j]=='a'||x[i].name[j]=='e'||x[i].name[j]=='i'||x[i].name[j]=='o'||x[i].name[j]=='u'||x[i].name[j]=='A'||x[i].name[j]=='E' ||x[i].name[j]=='I'||x[i].name[j]=='O'||x[i].name[j]=='U'){
                c++;
        }
        if(c>m){
            m=c;
            t=i;
        }
            }
    }
    printf("%s containing the highest number of vowels",x[t].name);
}
