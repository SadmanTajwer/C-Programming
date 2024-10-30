/*4. Make a structure of student type which contains name, age, CGPA. After that input some
student’s information and only name of the students whose CGPA is at least 3.75.*/
#include<stdio.h>
int main()
{
    struct students_information
    {
        char name[100];
        int age;
        float cgpa;
    };
    int n;
    printf("Enter the students information What do you want?\n");
    scanf("%d",&n);
    struct students_information x[n];
    int i,p;
    for(i=0;i<n;i++)
    {
        printf("Enter student name: \n");
        scanf("%s",x[i].name);
        printf("Enter student age: \n");
        scanf("%d",&x[i].age);
        printf("Enter the student cgpa: \n");
        scanf("%f",&x[i].cgpa);
    }
    for(i=0;i<n;i++)
    {
        if(x[i].cgpa>=3.75)
        {
            p=i;
            printf("%s\n",x[p].name);
        }
    }
    return 0;
}
